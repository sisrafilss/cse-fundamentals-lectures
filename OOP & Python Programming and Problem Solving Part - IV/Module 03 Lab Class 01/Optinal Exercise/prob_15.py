
base = int(input("base: "))
exp = int(input("exp: "))

def exponent(base, exp):
    result = 1
    for i in range(exp):
        result *= base
    return result

print("Exponant:", exponent(base, exp))