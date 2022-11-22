class Item:
    def __init__(self, item_name, item_price) -> None:
        self.__item_name = item_name
        self.__item_price = item_price

    def __repr__(self) -> str:
        return f"Item name: {self.__item_name} | Item Price: {self.__item_price}"


bowl = Item("Bowl", 100)
plate = Item("Plate", 150)

# we can access private attribute using _ClassName__attribute_name
print(plate._Item__item_name) # expected: Plate

# we can also set or change value of a private attribute 
Item._Item__is_broken = "Yes"

print(bowl._Item__is_broken) # expected: Yes
print(plate.__dict__)