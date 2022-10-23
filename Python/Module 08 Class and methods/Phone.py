class Phone:
    # attributes
    brand = 'Realme'
    color: "Black"
    price: 12000

# an object created using the Phone class
my_phone = Phone()

print(my_phone) # expected: <__main__.Phone object at 0x00000245D43EB910> (address of the object)

# brand is a property of my_phone class
print(my_phone.brand) # expected:  Realme
