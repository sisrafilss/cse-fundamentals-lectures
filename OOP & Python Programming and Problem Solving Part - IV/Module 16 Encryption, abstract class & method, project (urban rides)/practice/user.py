import hashlib
from lib2to3.pgen2 import driver
from random import randint
from brta import BRTA
from vehicle import Bike, Car, Cng
from ride_manager import uber

license_authority = BRTA()


class User:
    def __init__(self, name, email, password):
        self.name = name
        self.email = email
        self.__password = password
        pwd_encrypted = hashlib.md5(password.encode()).hexdigest()
        with open("users.txt", "a") as file:
            file.write(f"{email} {pwd_encrypted}\n")
        file.close()
    
class Rider(User):
    def __init__(self, name, email, password, location, balance):
        super().__init__(name, email, password)
        self.location = location
        self.balance = balance

class Driver(User):
    def __init__(self, name, email, password, location, license):
        super().__init__(name, email, password)
        self.location = location
        self.license = license
        self.earning = 0
        self.driving_status = license_authority.validate_license(self.email, self.license)

    def take_driving_test(self):
        license = license_authority.take_driving_test(self.email)
        if license:
            self.license = license
            self.driving_status = True

    def register_a_vahicle(self, vehicle_type, license_plate, rate):
        if vehicle_type == 'car':
            new_vehicle = Car(vehicle_type, license_plate, rate, self)
            uber.add_a_vehicle(vehicle_type, new_vehicle)
        elif vehicle_type == 'bike':
            new_vehicle = Bike(vehicle_type, license_plate, rate, self)
            uber.add_a_vehicle(vehicle_type, new_vehicle)
        else:
            new_vehicle = Cng(vehicle_type, license_plate, rate, self)
            uber.add_a_vehicle(vehicle_type, new_vehicle)

    
        

rider1 = Rider("rider1", "rider1@gmail.com", "rider1", randint(0, 100), 5000)
rider2 = Rider("rider2", "rider2@gmail.com", "rider2", randint(0, 100), 3000)
rider3 = Rider("rider3", "rider3@gmail.com", "rider3", randint(0, 100), 8000)

print("")
driver1 = Driver("driver1", "driver1@gmail.com", "driver1", randint(0, 100), 98989)
driver1.take_driving_test()
driver1.register_a_vahicle('car', 8989, 10)
print("")

print("")
driver2 = Driver("driver2", "driver2@gmail.com", "driver2", randint(0, 100), 23422)
driver2.take_driving_test()
driver2.register_a_vahicle('car', 2322, 10)
print("")

print("")
driver3 = Driver("driver3", "driver3@gmail.com", "driver3", randint(0, 100), 87567)
driver3.take_driving_test()
driver3.register_a_vahicle('car', 8900, 10)
print("")

print("")
driver4 = Driver("driver4", "driver4@gmail.com", "driver4", randint(0, 100), 27634)
driver4.take_driving_test()
driver4.register_a_vahicle('car', 6662, 10)
print("")

print("")
driver1.take_driving_test()
uber.find_available_car(rider1, "car", 70)
print("")

