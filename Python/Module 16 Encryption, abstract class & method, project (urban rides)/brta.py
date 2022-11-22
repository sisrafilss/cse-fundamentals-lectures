import random


class BRTA:
    def __init__(self):
        self.__license = {}
    
    def take_driving_test(self, email):
        score = random.randint(0, 100)
        if score >= 33:
            print(f"Congrats, you have passed. Your Score is {score}")
            lincese_number = random.randint(5000, 9999)
            self.__license[email] = lincese_number
            return lincese_number
        else:
            print(f"Sorry! You failed. Your Score is {score}")
            return False
        
    def validate_license(self, email, license):
        for key, value in self.__license.items():
            if key == email and value == license:
                return True
        return False