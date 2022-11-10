class Trip:
    def __init__(self, trip_cities, aircraft, price, start_date, route = "") -> None:
        self.trip_cities = trip_cities
        self.aircraft = aircraft
        self.price = price
        self.start_date = start_date
        self.trip_rout = route

    def __repr__(self) -> str:
        return f"Trip Cities: {self.trip_cities}"