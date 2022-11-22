from xml.etree.ElementInclude import include


income = 45000

def calculate_tax(income, percentage):
    return (income * percentage)/ 100

tax = 0
if income <= 10000:
    tax = 0
elif income > 10000:
    if income <= 20000:
        tax = calculate_tax(income - 10000, 10)
    else:
        extra_income = income - 20000
        extra_tax = calculate_tax(extra_income, 20)

        regular_tax = calculate_tax(10000, 10)
        tax = extra_tax + regular_tax


print(int(tax))
