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

    def get_fare(self, distance):
        return self.rate * distance

b1 = Bike('Masud', 5)
c1 = Car('Mahbub', 10)
cng = Bike('Moksed', 8)

customers = [20, 14, 16]

for distance in customers:
    print(b1.get_fare(distance))
    print(c1.get_fare(distance))
    print(cng.get_fare(distance))