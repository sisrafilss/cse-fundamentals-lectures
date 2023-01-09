class Person:
    def __init__(self, name, age, phone):

        # assert will through assertion error if the ageand phone could not satisfy the conditions written after assert keyword
        assert age > 13, "Age must be greather than 13"
        assert len(phone) == 11, "Invalid phone number"

        self.name = name
        self.age = age
        self.phone = phone

    def __repr__(self) -> str:
        return f"{self.name} {self.phone} {self.age}"

israfil = Person("Israfil", 14, "01521410415") # this will executed perfectly
# israfil = Person("Israfil", 13, "01521410415") # this will create error
print(israfil)