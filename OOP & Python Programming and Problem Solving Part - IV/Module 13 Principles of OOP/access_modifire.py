# public, protected, private

class Account:
    def __init__(self, holder_name):
        self.holder_name = holder_name


class StudentAccount(Account):
    def __init__(self, holder_name, initial_balance, school):
        super().__init__(holder_name)
        self.__balance = initial_balance
        self.school = school

    def deposit(self, amount):
        if amount > 0:
            self.__balance += amount
        else:
            return 'Negative amount is given'
    
    def withdraw(self, amount):
        if self.__balance > amount:
            self.__balance -= amount
            return 'here is your money'
        else:
            return 'No money for you'
    
    def get_balance(self):
        return self.__balance



abir = StudentAccount("Abir", 12000, 'Saint Joseph')

# print(abir.get_balance())
abir.__balance = 15000
abir.deposit(15000)
abir.withdraw(10000)
# print(abir.get_balance())

print(abir._StudentAccount__balance)


