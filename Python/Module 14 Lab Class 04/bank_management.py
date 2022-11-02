
class Account:
    def __init__(self, name, age, balance):
        self.name = name
        self.age = age
        self.balance = balance

    def deposit(self, amount):
        if amount < 0:
            print("Negative amount was given")
        else:
            self.balance += amount
            print(f"You have deposited taka {amount} Successfully")
    
    def withdraw(self, amount):
        if self.balance < amount:
            print("No money for you")
        else:
            self.balance -= amount
            print(f"Here is your taka {amount}")
    
    def get_balance(self):
        return self.balance


my_account = Account("Israfil Hossen", 26, 5000)

print(my_account.get_balance())

my_account.deposit(7000)
print(my_account.get_balance())
