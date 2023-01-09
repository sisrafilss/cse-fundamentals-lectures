from abc import ABC, abstractmethod

# abstract base class
class Animal(ABC):
    @property
    @abstractmethod
    def name(self):
        pass
    
    @abstractmethod
    def eat(self):
        pass
    
    @abstractmethod
    def move(self):
        print("Moving around the zoo")


class Monkey(Animal):
    def __init__(self):
        self.__name = 'monkey'

    @property
    def name(self):
        return self.__name

    @name.setter
    def name(self, value):
        self.__name = value

    def sing(self):
        print("Monkey is singning!")
    
    def eat(self):
        print("Eatting banana")

    def move(self):
        print("hanging on the branches of the trees")
        super().move()


layka = Monkey()
layka.sing()
layka.move()
layka.eat()
layka.name = "moonkey"
print(layka.name)