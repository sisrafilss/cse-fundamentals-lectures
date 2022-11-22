class Laptop:
    def __init__(self, brand, age):
        self.brand = brand
        self.age = age

    def increase_age(self, age = 1):
        self.age = self.age + age
    
    def repair(self, life_increse = -5): # Laptop's age decrease 5 years by default after each repair
        self.increase_age(life_increse) # calling a method from another method


my_laptop = Laptop('Lenovo', 10)

my_laptop.increase_age()
my_laptop.increase_age(5)
my_laptop.repair(-10)

print(my_laptop.age) # expected: 6