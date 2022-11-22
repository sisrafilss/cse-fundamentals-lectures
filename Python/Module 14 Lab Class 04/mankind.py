class Human:
    def __init__(self, gender, weight, height):
        self.gender = gender
        self.weight = weight
        self.height = height

class Police(Human):
    def __init__(self, gender, weight, height, name, cases):
        super().__init__(gender, weight, height)
        self.name = name
        self.cases = cases
    
class CsEngineer(Human):
    def __init__(self, gender, weight, height, name, has_gf, love_for_code):
        super().__init__(gender, weight, height)
        self.name = name
        self.has_gf = has_gf
        self.love_for_code = love_for_code


if __name__ == '__main__':
    police = Police("male", 65, 170, "Arjan Ali", True)
    print(vars(police))

    engineer = CsEngineer(name="Sokhina Begum", love_for_code=True, has_gf=False, weight=70, height=165, gender='female')
    print(vars(engineer))

