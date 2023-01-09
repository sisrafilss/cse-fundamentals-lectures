
# Base / Parent Class
class Device:
    def __init__(self, brand, price, color):
        self.brand = brand
        self.price = price
        self.color = color

    def re_sale(self):
        print("ready to re-sale")

# inherited Device class
class Laptop(Device):
    def __init__(self, brand, price, color, disc_size):
        super().__init__(brand, price, color)
        self.disc_size = disc_size

    def run(self):
        print("running the laptop")

    def purchase(self, money):
        if money < self.price:
            return "No laptop for you"
        else:
            print("This Device is for you ")
            return money - self.price

    def __repr__(self):
        return (f"Lapotp {self.brand} : {self.price} : {self.color}")
    

# inherited Device class
class Phone(Device):
    def __init__(self, brand, price, color, camera, sim_num):
        super().__init__(brand, price, color)
        self.camera = camera
        self.sim_num = sim_num

    def is_dual_sim(self):
        return self.sim_num > 1
    
    def __repr__(self):
        return (f"Phone {self.brand} : {self.price} : {self.color}")
    

class Watch:
    def __init__(self, brand, price, color, watch_type):
        self.brand = brand
        self.price = price
        self.color = color
        self.watch_type = watch_type

    def is_digital(self):
        return self.watch_type == 'digital'


class Manager:
    def __init__(self, name, salary, experience, designation):
        pass

    def withdraw_salary(self):
        pass

    def day_total_sales(self):
        pass

    def handle_customer_complain(self):
        pass


class SalesPerson:
    def __init__(self, name, salary, experience, designation, comission):
        pass

    def withdraw_salary(self):
        pass

    def handle_customer(slef):
        pass



lenovo = Laptop('Lenovo', 42000, 'Black', '256gb')
hp = Laptop('HP', 35000, 'White', '128gb')

print(lenovo)
print(hp)

oppo = Phone("Oppo", 14000, "Black", "12MP", 2)
samsung = Phone("Samsung", 21000, "Silver", "21MP", 1)

print(oppo)
print(samsung)

lenovo.re_sale()
print(lenovo.brand)

print(oppo.camera)







    


        