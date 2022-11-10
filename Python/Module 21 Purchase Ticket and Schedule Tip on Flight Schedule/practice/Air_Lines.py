import csv
from Aircraft import Aircraft

class AirLines:
    def __init__(self) -> None:
        self.aircrafts = None
        self.load_aircrafts("./data/aircraft.csv")

    def load_aircrafts(self, csv_file):
        aircrafts = {}
        with open(csv_file, "r") as file:
            lines = csv.reader(file)
            _ = next(lines)
            for line in lines:
                aircrafts[line[0]] =  Aircraft(line[3], line[0], line[1], line[4])
        file.close()
        self.aircrafts = aircrafts

    def get_aircraft(self, aircraft_code):
        return self.aircrafts[aircraft_code]

    def get_aircraft_by_distance(self, distance):
        for aircraft in self.aircrafts.values():
            if aircraft.flight_range > distance:
                return aircraft


AirLines()