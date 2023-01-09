import enum


class Car:
    def __init__(self, license, model, color):
        self.license = license
        self.model = model
        self.color = color
    def __repr__(self):
        return f"{self.license},{self.model},{self.color}"

class Garage:
    def __init__(self):
        self.car_added = []
        self.spot = 10
        self.car_infos = {}
        self.bill = 0
        self.ticket = []

    def spot_available(self):
        return self.spot

    def add_car_to_garage(self, car):
        self.spot_name = ['A1', 'B1', 'C1', 'D1', 'E1', 'F1', 'G1', 'H1', 'I1', 'J1']
        if self.spot_available() > 0:
            user_data = str(car).split(",")
            self.spot -= 1
            self.car_added.append(user_data)
            self.car_infos = {'Tickets': [], 'License': [], 'Model': [], 'Color': []}
            ticket = ""

            for i, val in enumerate(self.car_added):
                ticket = self.spot_name[i] + val[0]
                self.car_infos['Tickets'].append(ticket)
                self.car_infos['License'].append(val[0])
                self.car_infos['Model'].append(val[1])
                self.car_infos['Color'].append(val[2])
            print(f"Successfully Parked. Your Ticket: {ticket}")
        else:
            print("NO STPOTS AVAILABLE!!!!")
    
    def unpark(self, ticket, hours):
        past_spot_len = len(self.car_infos['Tickets'])

        if ticket not in self.car_infos['Tickets']:
            print("NO CAR FOUND!!!!")
        else:
            for i, val in enumerate(self.car_infos['Tickets']):
                if val == ticket:
                    print(f"YOUR LICENSE IS: {self.car_infos['License'][i]}")
                    print(f"YOUR Model IS: {self.car_infos['Model'][i]}")
                    print(f"YOUR Color IS: {self.car_infos['Color'][i]}")

                    self.car_infos['License'].pop(i)
                    self.car_infos['Model'].pop(i)
                    self.car_infos['Color'].pop(i)
                    self.car_infos['Tickets'].pop(i)
                    self.spot += 1
        if hours > 30:
            print(f"Total Bill = ${hours * 5 + 100}")
        else:
            print(f"Total Bill = ${hours * 5}")
    
    def total_cars_in_garage(self):
        for car in self.car_infos.items():
            print(car)


my_garage = Garage()
user_car = Car('1234MN', 'Ferrari', 'Red')
user_car2 = Car('450MN', 'Harari', 'Black')



my_garage.add_car_to_garage(user_car)
my_garage.add_car_to_garage(user_car2)

my_garage.total_cars_in_garage()

my_garage.unpark("A11234MN", 10)
my_garage.unpark("B1450MN", 5)

my_garage.total_cars_in_garage()