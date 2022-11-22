# A Hierarchy is created from the mother class Employee

class Employee:
    def __init__(self, name, id, salary, position, experience):
        self.name = name
        self.id = id
        self.salary = salary
        self.position = position
        self.experience = experience

class Developer(Employee):
    def __init__(self, name, id, salary, position, experience, tech, foucs):
        self.tech = tech
        self.area_of_work = foucs
        super().__init__(name, id, salary, position, experience)

class Testing(Employee):
    pass

class Sales(Employee):
    pass

class TechLead(Employee):
    def __init__(self, name, id, salary, position, experience, team):
        self.team = team
        Employee.__init__(self, name, id, salary, position, experience)
        
    

