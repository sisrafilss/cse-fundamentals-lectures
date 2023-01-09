class Account:
    def __init__(self, holder, initial_balance):
        self.holder = holder
        self.__balance = initial_balance

    def deposit(self, amount):
        self.__balance += amount
        print(f"You have deposited {amount} successfully")

    def withdraw(self, amount):
        self.__balance -= amount

    def get_balance(self):
        print(self.__balance)

    

class StudentAccount(Account):
    def __init__(self, holder, initial_balance, school):
        self.school = school
        super().__init__(holder, initial_balance)


rafsan = StudentAccount("Rafsan", 50000, "IUB")
rafsan.deposit(15000)
rafsan.deposit(20000)
rafsan.deposit(10000)

# rafsan.balance = 0

rafsan.get_balance()


