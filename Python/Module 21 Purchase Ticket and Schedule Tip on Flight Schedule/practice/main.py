from Travel_Agent import TravelAgent

def main():
    travel_agency = TravelAgent("Go Ula")
    # trip1 = travel_agency.set_trip_one_city_one_way("MZR", "DAC", "02/05/2023")
    # print("Trip 1 info: ",trip1)

    # trip_cities = ['DUB', 'ORD', 'LHR']
    # trip2 = travel_agency.set_trip_two_city_one_way(trip_cities, "10/05/2025")

    # for trip in trip2:
    #     print(trip, "\n")

    trip_cities = ['DUB', 'LHR', 'JFK', 'ORD', 'SYD']
    trip3 = travel_agency.set_trip_multi_city_flexible_route(trip_cities, "10/11/2055")
    print("Total Price:", trip3[1])
    for trip in trip3[0]:
        print(trip)

main()