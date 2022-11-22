import hashlib
from brta import BRTA
from random import randint, choice
from vehicles import *
from ride_manager import uber
import threading

license_authority = BRTA()

class User:
    def __init__(self, name, email, password) -> None:
        self.name = name
        self.email = email
        # check if user already exists or not
        user_exists = False
        with open("users.txt", 'r') as file:
            if email in file.read():
                user_exists = True
                # print(f"User: {email} already exists!")
        file.close()
        # save user data if not exists
        if user_exists == False:
            pwd_encrypted = hashlib.md5(password.encode()).hexdigest()
            with open("users.txt", "a") as file:
                file.write(f"{email} {pwd_encrypted}\n")
            file.close()
    
    # User loign
    @staticmethod
    def log_in(email, password):
        saved_password = ""
        with open("users.txt", "r") as file:
            lines = file.readlines()
            for line in lines:
                if email in line:
                    saved_password = line.split(" ")[1]
                    break
        file.close()
        pwd_encrypted = hashlib.md5(password.encode()).hexdigest() + "\n"
        if saved_password == pwd_encrypted:
            print("Valid User")
            return True
        else:
            print("Email and password not matched")
            return False


# Manage Rider
class Rider(User):
    def __init__(self, name, email, password, location, balance) -> None:
        super().__init__(name, email, password)
        self.location = location
        self.balance = balance
        self.__trip_history = []

    def set_location(self, location):
        self.location = location
    
    def get_location(self):
        return self.location

    def start_trip(self, fare, trip_info):
        self.balance -= fare
        self.__trip_history.append(trip_info)

    def get_trip_history(self):
        return self.__trip_history


# Manage driver
class Driver(User):
    def __init__(self, name, email, password, location, license) -> None:
        super().__init__(name, email, password)
        self.location = location
        self.license = license
        self.__trip_history = []
        self.valid_driver = license_authority.validate_license(email, license)
        self.earning = 0
        self.vehicle = None

    def register_a_vehicle(self, vehicle_type, license_plate, rate):
        if self.valid_driver is True:
            if vehicle_type == "car":
                self.vehicle = Car(vehicle_type, license_plate, rate, self)
                uber.add_a_vehicle(vehicle_type, self.vehicle)
            elif vehicle_type == "bike":
                self.vehicle = Bike(vehicle_type, license_plate, rate, self)
                uber.add_a_vehicle(vehicle_type, self.vehicle)
            else:
                self.vehicle = Cng(vehicle_type, license_plate, rate, self)
                uber.add_a_vehicle(vehicle_type, self.vehicle)
        else:
            pass
            # print("You are not a valid driver")

    def start_a_trip(self, start, destination, fare, trip_info):
        self.earning += fare
        self.location = destination
        # start_driving will implement later
        trip_thread = threading.Thread(target=self.vehicle.start_driving, args=(start, destination,))
        trip_thread.start()
        self.__trip_history.append(trip_info)
    
    def get_trip_history(self):
        return self.__trip_history
    
    def take_driving_test(self):
        result = license_authority.take_driving_test(self.email)
        if result == False:
            # print("You failed, try again")
            self.license = None
            return False
        else:
            self.license = result
            self.valid_driver = True
            return result




rider1 = Rider("rider1", "rider1@gmail.com", "rider1", randint(0, 100), 5000)
rider2 = Rider("rider2", "rider2@gmail.com", "rider2", randint(0, 100), 5000)
rider3 = Rider("rider3", "rider3@gmail.com", "rider3", randint(0, 100), 5000)
rider4 = Rider("rider4", "rider4@gmail.com", "rider4", randint(0, 100), 5000)
rider5 = Rider("rider5", "rider5@gmail.com", "rider5", randint(0, 100), 5000)

# create 100 drivers
vechicle_types = ["car", "bike", "cng"]
for i in range(1, 101):
    driver1 = Driver(f"driver{i}", f"driver{i}@gmail.com", f"driver{i}", randint(0, 100), 8989)
    driver1.take_driving_test()
    driver1.register_a_vehicle(choice(vechicle_types), randint(5000, 9999), 10)


uber.find_a_vehicle(rider1, choice(vechicle_types), randint(0, 100))
uber.find_a_vehicle(rider2, choice(vechicle_types), randint(0, 100))
uber.find_a_vehicle(rider3, choice(vechicle_types), randint(0, 100))
uber.find_a_vehicle(rider4, choice(vechicle_types), randint(0, 100))
uber.find_a_vehicle(rider5, choice(vechicle_types), randint(0, 100))
uber.find_a_vehicle(rider1, choice(vechicle_types), randint(0, 100))
uber.find_a_vehicle(rider3, choice(vechicle_types), randint(0, 100))


# print(vars(driver1))

# print(vars(israfil))
        