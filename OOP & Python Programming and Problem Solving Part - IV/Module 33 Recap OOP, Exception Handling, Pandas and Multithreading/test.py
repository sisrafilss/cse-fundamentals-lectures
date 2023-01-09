from abc import ABC, abstractclassmethod

class Car(ABC):
    @abstractclassmethod
    def go(self):
        print("Start Going")
    def another_method(self):
        print("This is another method")


vehicle = Car()
# vehicle.go()