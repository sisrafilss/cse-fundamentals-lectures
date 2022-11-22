from abc import ABC, abstractclassmethod, abstractmethod

class Vehicle(ABC):
    speed = {
        "car": 30,
        "bike": 50,
        "cng": 15
    }
    def __init__(self, vehicle_type, license_plate, rate, driver):
        self.vehicle_type = vehicle_type
        self.license_plate = license_plate
        self.driver = driver
        self.status = 'available'
        self.rate = rate
        self.speed = self.speed[vehicle_type]

    @abstractclassmethod
    def start_driving(self):
        pass

    @abstractclassmethod
    def trip_finished(self):
        pass

class Car(Vehicle):
    def __init__(self, vehicle_type, license_plate, rate, driver):
        super().__init__(vehicle_type, license_plate, rate, driver)

    def start_driving(self):
        print(f"{self.vehicle_type}, {self.license_plate} started")
        self.status = "unavailable"

    def trip_finished(self):
        print(f"{self.vehicle_type}, {self.license_plate} completed")
        self.status = "available"


class Bike(Vehicle):
    def __init__(self, vehicle_type, license_plate, rate, driver):
        super().__init__(vehicle_type, license_plate, rate, driver)

    def start_driving(self):
        print(f"{self.vehicle_type}, {self.license_plate} started")
        self.status = "unavailable"

    def trip_finished(self):
        print(f"{self.vehicle_type}, {self.license_plate} completed")
        self.status = "available"


class Cng(Vehicle):
    def __init__(self, vehicle_type, license_plate, rate, driver):
        super().__init__(vehicle_type, license_plate, rate, driver)

    def start_driving(self):
        print(f"{self.vehicle_type}, {self.license_plate} started")
        self.status = "unavailable"

    def trip_finished(self):
        print(f"{self.vehicle_type}, {self.license_plate} completed")
        self.status = "available"

car = Car('car', 2323, 10, "Israifl")
print(vars(car))