
balance = 500

def total_cost(price, quantity):
    global balance
    cost = price * quantity
    balance = cost
    return cost


cost = total_cost(5, 10)
print(cost)

print(f"balance = {balance}") # balance = 50