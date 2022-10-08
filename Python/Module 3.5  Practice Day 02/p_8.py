from importlib.resources import is_resource


lower_bound = int(input("Lower Bound: "))
upper_bound = int(input("Upper Bound: "))

def is_prime(num):
    prime = True
    for i in range(2, int(num / 2) + 1):
        if num % i == 0:
            prime = False
            return prime
    return prime

for num in range(lower_bound, upper_bound + 1):
    if is_prime(num):
        print(num)

# prime = is_prime(28)