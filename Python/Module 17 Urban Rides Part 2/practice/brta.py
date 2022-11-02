from random import randint

class BRTA:
    def __init__(self) -> None:
        self.__license = {}

    def take_driving_test(self, email):
        score = randint(0, 100)
        if score >= 33:
            license = randint(5000, 9999)
            self.__license[email] = license
            # print(f"Congrats! You have passed the driving test with score: {score}")
            return license
        else:
            # print(f"You have failed the driving test with score: {score}")
            return False

    def validate_license(self, email, license):
        # print(email,license)
        for key, value in self.__license.items():
            # print(key, value)
            if key == email and value == license:
                # print("You are a valid driver")
                return 
        # print("You are not a valid driver")
        return False

    

        