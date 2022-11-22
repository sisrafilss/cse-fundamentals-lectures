import hashlib
from random import randint, choice
from brta import BRTA
from vehicles import Bike, Car, Cng
from ride_manager import uber
import threading

class UserAlreadyExists(Exception):
    def __init__(self, email, *args: object) -> None:
        print(f"User: {email} already exisit!")
        super().__init__(*args)

license_authority = BRTA()

class User:
    def __init__(self, name, email, password):
        self.name = name
        self.email = email
        pwd_encrypted = hashlib.md5(password.encode()).hexdigest()

        email_exists = False
        with open("users.txt", "r") as file:
            if email in file.read():
                # raise UserAlreadyExists(email)
                email_exists = True
                # print(f"User: {email} already exisit!")
        
        if email_exists == False:
            with open("users.txt", "a") as file:
                file.write(f"{email} {pwd_encrypted}\n")
            file.close()
            print(f"{name} user created")
    
    @staticmethod
    def log_in(email, password):
        saved_password = ""
        with open("users.txt", "r") as file:
            lines = file.readlines()
            for line in lines:
                if email in line:
                    saved_password = line.split(" ")[1]
        file.close()
        password_match = hashlib.md5(password.encode()).hexdigest() == saved_password
        if password_match:
            print("valid user")
            return True
        else:
            print("wrong password")
            return False


class Rider(User):
    def __init__(self, name, email, password, locaiton, balance):
        self.location = locaiton
        self.balance = balance
        self.__trip_history = []
        super().__init__(name, email, password)

    def set_location(self, location):
        self.location = location

    def get_location(self, location):
        return self.location
    
    def request_trip(self, destination):
        pass

    def start_trip(self, fare, trip_info):
        self.balance -= fare
        self.__trip_history.append(trip_info)
    
    def get_trip_history(self):
        return self.__trip_history


class Driver(User):
    def __init__(self, name, email, password, location, license):
        super().__init__(name, email, password)
        self.location = location
        self.__trip_history = []
        self.license = license
        self.valid_driver = license_authority.validate_license(email, license)
        self.earning = 0
        self.vehicle = None


    def register_a_vehicle(self, vehicle_type, license_plate, rate):
        if self.valid_driver is True:
            if vehicle_type == 'car':
                self.vehicle = Car(vehicle_type, license_plate, rate, self)
                uber.add_a_vehicle(vehicle_type, self.vehicle)
            elif vehicle_type == 'bike':
                self.vehicle = Bike(vehicle_type, license_plate, rate, self)
                uber.add_a_vehicle(vehicle_type, self.vehicle)
            else:
                self.vehicle = Cng(vehicle_type, license_plate, rate, self)
                uber.add_a_vehicle(vehicle_type, self.vehicle)
        else:
            # print("You are not a valid driver")
            pass


    def start_a_trip(self, start, destination, fare, trip_info):
        self.earning += fare
        self.location = destination
        # start thread
        trip_thread = threading.Thread(target=self.vehicle.start_driving, args=(start, destination,))
        trip_thread.start()
        # self.vehicle.start_driving(start, destination)
        self.__trip_history.append(trip_info)

    def get_trip_history(self):
        return self.__trip_history

    def take_driving_test(self):
        result = license_authority.take_driving_test(self.email)
        if result == False:
            # print("Sorry you failed, try again")
            self.license = None
            return result
        else:
            self.license = result
            self.valid_driver = True
            return result



rider1 = Rider("rider1", "rider1@gmail.com", "rider1", randint(0, 30), 5000)
rider2 = Rider("rider2", "rider2@gmail.com", "rider2", randint(0, 30), 5000)
rider3 = Rider("rider3", "rider3@gmail.com", "rider3", randint(0, 30), 5000)
rider4 = Rider("rider4", "rider4@gmail.com", "rider4", randint(0, 30), 5000)
rider5 = Rider("rider5", "rider5@gmail.com", "rider5", randint(0, 30), 5000)
# print("")


vehicle_types = ['car', 'bike', 'cng']
for i in range(1, 100):
    driver1 = Driver(f"driver{i}", f"driver{i}@gmail.com", f"driver{i}", randint(0, 100), randint(5000, 9999))
    driver1.take_driving_test()
    driver1.register_a_vehicle(choice(vehicle_types), randint(50000, 99999), 10)

# print(uber.get_available_cars())

uber.find_a_vehicle(rider1, choice(vehicle_types), randint(0, 100))
print("")
uber.find_a_vehicle(rider2, choice(vehicle_types), randint(0, 100))
print("")
uber.find_a_vehicle(rider3, choice(vehicle_types), randint(0, 100))
print("")
uber.find_a_vehicle(rider4, choice(vehicle_types), randint(0, 100))
print("")
uber.find_a_vehicle(rider5, choice(vehicle_types), randint(0, 100))
print("")
# uber.find_a_vehicle(rider1, 'car', randint(0, 100))
# uber.find_a_vehicle(rider1, 'car', randint(0, 100))
# uber.find_a_vehicle(rider1, 'car', randint(0, 100))
# uber.find_a_vehicle(rider1, 'car', randint(0, 100))
# uber.find_a_vehicle(rider1, 'car', randint(0, 100))
# uber.find_a_vehicle(rider1, 'car', randint(0, 100))

# print(uber.trip_history())

# print("\n", uber.get_income())


