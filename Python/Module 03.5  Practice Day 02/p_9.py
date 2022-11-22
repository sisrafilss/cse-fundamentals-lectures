from doctest import OutputChecker


int_num = int(input("Enter the number: "))

output = 0

while int_num > 0:
    last_digit = int_num % 10
    output = (output * 10) + last_digit
    int_num /= 10
    int_num = int(int_num)


print(output)