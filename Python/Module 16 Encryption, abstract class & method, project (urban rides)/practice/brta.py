from random import randint


class BRTA:
    def __init__(self):
        self.__license = {}
        # print("License Authority Created")
    
    def validate_license(self, email, license):
        for key, value in self.__license.items():
            if key == email and value == license:
                return True
            return False

    def take_driving_test(self, email):
        score = randint(0, 100)
        if score >= 33:
            license = randint(5000, 99999)
            self.__license[email] = license
            print(f"Congratulations! You have passed with score {score}!!")
            return license
        else:
            print(f"You have failed with score {score}!")
            return False