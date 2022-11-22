class Vehicle:
    vehicle_type = "Bus"
    def __init__(self, name, mileage, capacity):
        self.name = name
        self.mileage = mileage
        self.capacity = capacity
    
    def get_mileage(self):
        return self.mileage
    
    def set_mileage(self, mileage):
        self.mileage = mileage
    
    def __str__(self):
        return f"Vehicle(vehicle_type: {self.vehicle_type}, vehicle_name: {self.name}, mileage: {self.mileage}, capacity: {self.capacity})"


class Bus(Vehicle):
    pass

School_bus = Bus("School Volvo", 12, 50)
city_bus = Bus("City Bus", 9, 52)



# print(isinstance(School_bus, Bus))

# print(School_bus.get_mileage())
# School_bus.set_mileage(10)
# print(School_bus.get_mileage())

print(School_bus.__str__())
# print(School_bus.__repr__())
# print(School_bus)
