from Travel_Agent import Travel_Agent

def main():
    travel_agent = Travel_Agent("Go Jaan")
    # trip_info = travel_agent.set_trip_one_city_one_way("DAC", "PRA", "05/07/2023")
    # print("Aircraft: ", trip_info.aircraft)
    # print("Price: ", trip_info.price)

    trip_cities = ['DUB', 'ORD', 'JFK', 'SYD', 'LHR' ]
    trip_info2 = travel_agent.set_trip_multi_city_flexible_route(trip_cities, '05/11/2565')
    print('Total Price:', trip_info2[1])
    for trip in trip_info2[0]:
        print(trip)
    # print(trip_info2)


if __name__ == "__main__":
    main()