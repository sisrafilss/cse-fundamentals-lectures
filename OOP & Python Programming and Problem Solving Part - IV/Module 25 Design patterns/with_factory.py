class Bike:
    def __init__(self, driver, rate) -> None:
        self.driver = driver
        self.rate = rate

    def get_fare(self, distance):
        return self.rate * distance


class Car:
    def __init__(self, driver, rate) -> None:
        self.driver = driver
        self.rate = rate

    def get_fare(self, distance):
        return self.rate * distance


class CNG:
    def __init__(self, driver, rate) -> None:
        self.driver = driver
        self.rate = rate


def Factory(driver, rate, vehicle_type):
    vehicles = {
        'bike': Bike,
        'car': Car,
        'cng': CNG
    }
    return vehicles[vehicle_type](driver, rate)

c = Factory('Taskin', 14, 'car')

print(c.get_fare(20))
