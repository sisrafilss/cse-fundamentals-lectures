# poly = many
# morphism = different

class Animal:
    def __init__(self, name):
        self.name = name
    
    def make_sound(self):
        print(f"{self.name} making sound")
    

class Cat(Animal):
    def __init__(self, name):
        super().__init__(name)
    
    def make_sound(self):
        print("mewaw mewaw!")


class Dog(Animal):
    def __init__(self, name):
        Animal.__init__(self, name)
    
    def make_sound(self):
        print("Bark Bark")


class Horse(Animal):
    def __init__(self, name):
        Animal.__init__(self, name)
    
    def make_sound(self):
        print("ney ney")


biral = Cat("biral")
kutta = Dog("kutta")
ghora = Horse("ghora")
asol_kutta = Dog("asol kutta")

animals = [biral, kutta, ghora, asol_kutta]

for animal in animals:
    animal.make_sound()