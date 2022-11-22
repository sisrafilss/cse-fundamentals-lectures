class Trip:
    def __init__(self, trip_cities, aircraft, price,  start_date, route = "") -> None:
        self.trip_cities = trip_cities
        self.aircraft = aircraft
        self.start_date = start_date
        self.trip_route = route
        self.price = price

    def __repr__(self) -> str:
        # return f"Trip Cities: {self.trip_cities}, Aircraft: {self.aircraft}, Price: {self.price}, Start Date: {self.start_date}Start Date: {self.start_date}"
        return f"Trip Cities: {self.trip_cities}"