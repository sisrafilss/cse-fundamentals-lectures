class Bank:
    def __init__(self, balance):
        self.balance = balance
        self.min_withdraw = 100
        self.max_withdraw = 10000

    def get_balance(self):
        return self.balance
    
    def withdraw(self, amount):
        if amount > self.balance:
            return "Cross your limit"
        elif amount > self.max_withdraw:
            return f"Maximum withdraw limit is {self.max_withdraw}"
        elif amount < self.min_withdraw:
            return f"Minimum withdraw amount is {self.min_withdraw}"
        else:
            self.balance = self.balance - amount
            return f"Here is your money {amount}"

    def deposit(self, amount):
        self.balance  = self.balance + amount
        return f"You have deposited tk {amount}, Your current balance is {self.get_balance()}"


my_bank = Bank(8000)

print(my_bank.get_balance()) # expected: 8000
print(my_bank.withdraw(5)) # expected: Minimum withdraw amount is 100
print(my_bank.withdraw(10000)) # expected: Cross your limit
print(my_bank.withdraw(3000)) # expected: Here is your money 3000
print(my_bank.get_balance()) # expected: 5000
print(my_bank.deposit(5000)) # expected: You have deposited tk 5000, Your current balance is 10000

