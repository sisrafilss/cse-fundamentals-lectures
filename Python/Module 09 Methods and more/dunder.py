class Person:
    def __init__(self, name, age, money, height = 64):
        self.name = name
        self.age = age
        self.money = money
        self.height = height
    
    # dunder method - it enable this class to execute '+' operation between it's instances
    def __add__(self, other):
        return self.money + other.money

    # Make the object callable (like a function)
    def __call__(self):
        return f"This is {self.name} with age {self.age} and have money {self.money}"

    # Enabled two object compareable (whther they are equal or not)
    def __eq__(self, other):
        return self.age == other

    # Enabled the class to return len
    def __len__(self):
        return self.height
        

alim = Person('Alim', 15, 500, 67)
dalim = Person('Dalim', 1, 700)

print(alim + dalim) # expected: 1200 | but the '+' operation was not possbile without the __add__ dunder method
print(alim()) # expected: This is Alim with age 15 and have money 500
print(alim == dalim) # expected: False
print(len(alim)) # expected: 67