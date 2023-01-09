# Class declaration
class Calculator:
    def add(self, x, y):
        return x + y
    
    def subtruct(self, x, y):
        return x - y
    
    def multiply(self, x, y):
        return x * y
    
    def divition(self, x, y):
        return x / y
    
# creating calc object from Calculator class
calc = Calculator()

x = 150
y = 50

sum = calc.add(x, y)
substr = calc.subtruct(x, y)
mul = calc.multiply(x, y)
div = calc.divition(x, y)

print("Sum:", sum) # expect: Sum: 200
print("Substract:", substr) # expect: Substract: 100
print("Multiplication:", mul) # expect: Multiplication: 7500
print("Division:", div) # expect: Division: 3.0

