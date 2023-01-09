class Vehicle:
    def __init__(self, name, license, price):
        self.name = name
        self.license = license
        self.price = price
        print("Vehicle class init called")

class Bus(Vehicle):
    def __init__(self, name, license, price, seat, ticket_price):
        self.seat = seat
        self.available_seats = seat
        self.ticket_price = ticket_price
        print("Bus class init called")
        super().__init__(name, license, price)

class ACBus(Bus):
    def __init__(self):
        print("AC Bus created!")