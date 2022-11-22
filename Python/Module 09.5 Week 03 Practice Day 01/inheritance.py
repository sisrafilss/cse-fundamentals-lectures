# Parent Class, Super Class, Base Class
class Phone:
    def call(self):
        print('You can call')
    
    def message(self):
        print("You can message")


# Child Class, Sub Class, Drived Class
class Sumsung(Phone):
    # call, message
    def take_photo(self):
        print("You can take photo")


# phone = Phone()
# phone.call()
# phone.message()

samsung = Sumsung()
samsung.call()
samsung.message()
samsung.take_photo()

print(issubclass(Sumsung, Phone)) # print - True

