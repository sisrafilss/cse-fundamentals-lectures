class School:
    def __init__(self, school_name):
        self.school_name = school_name
        print("School init called")

class Grade:
    def __init__(self, grade_name):
        self.grade_name = grade_name
        print("Grade init called")


class SportsTeam:
    def __init__(self, sport_name):
        self.sport = sport_name
        self.team = []

    def add_player(self, player_name):
        self.team.append(player_name)

# Multiple inheritance
class Student(School, Grade, SportsTeam):
    def __init__(self, name, school_name, grade_name, sport_name):
        self.name = name
        School.__init__(self, school_name) # equivalent to super().__init__(school_name)
        Grade.__init__(self, grade_name)
        SportsTeam.__init__(self, sport_name)
        print("Student init called")



razib = Student("Razib", "UK College", "MBA", "Cricket")
razib.add_player("Rakib")
print(razib.name)
print(razib.school_name)
print(razib.grade_name)
print(razib.team)
        
