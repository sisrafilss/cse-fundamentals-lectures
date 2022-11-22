class Account:
    def __init__(self, holder, balance):
        self.holder = holder
        self.balance = balance
    
    def __add__(self, other):
        return self.balance + other.balance


shakib = Account("Shakib Al Hasan", 50000)
shishir = Account("Shisir Bhabi", 30000)

total = shakib + shishir

print("Total Balance = ", total) # expected: Total Balance =  80000