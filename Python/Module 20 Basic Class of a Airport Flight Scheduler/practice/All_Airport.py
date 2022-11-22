import csv
from Airport import Airport
from math import radians, sin, cos, atan2, sqrt

class All_Airport:
    def __init__(self) -> None:
        self.airports = None
        self.load_airport_data("./data/airports.csv")
        

    def load_airport_data(self, csv_file):
        airports = {}
        country_currency = {}
        currency_rate = {}

        # country --> currency_alphabetic_code
        with open("./data/countrycurrency.csv", "r") as file:
            lines = csv.reader(file)
            _ = next(lines)
            for line in lines:
                country_currency[line[0]] = line[1]
        file.close()

        # currency_alphabetic_code --> currency_rate
        with open("./data/currencyrate.csv", "r") as file:
            lines = csv.reader(file)
            for line in lines:
                currency_rate[line[1]] = line[2]
        file.close()

        with open(csv_file, "r", encoding="utf8") as file:
            lines = csv.reader(file)
            try:
                for line in lines:
                    country = line[3]
                    currency_alphabetic_code = country_currency[country]
                    rate = currency_rate[currency_alphabetic_code]
                    airports[line[4]] = Airport(line[4], line[1], line[2], line[3], line[6], line[7], rate)
            except KeyError as e:
                print("key error: ", e)
            file.close()
        self.airports = airports

        # for airport in airports.items():
        #     print(airport)


    def get_distance_between_two_airpors(self, lat1, lon1, lat2, lon2):
        radius = 6371  # km
        distance_lat = radians(lat2 - lat1)
        distance_lon = radians(lon2 - lon1)
        a = (sin(distance_lat / 2) * sin(distance_lat / 2) +
            cos(radians(lat1)) * cos(radians(lat2)) *
            sin(distance_lon / 2) * sin(distance_lon / 2))
        c = 2 * atan2(sqrt(a), sqrt(1 - a))
        distance = radius * c
        return distance

    def distance_between_two_airports(self, airport1_code, airport2_code):
        airport1 = self.airports[airport1_code]
        airport2 = self.airports[airport2_code]
        distance = self.get_distance_between_two_airpors(airport1.lat, airport1.lon, airport2.lat, airport2.lon)
        return distance

    def get_ticket_price(self, start, end):
        distance = self.distance_between_two_airports(start, end)
        airport1 = self.airports[start]
        fare = distance * airport1.rate
        return fare

world_tour = All_Airport()
fare = world_tour.get_ticket_price("DAC", "MZR")
print("Ticket Fare: ", fare)