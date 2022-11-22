from unicodedata import digit


inp_str = input("Enter the string: ")

uppercase = 0
lowercase = 0
digits = 0
symbol = 0

for char in inp_str:
    char = ord(char)
    if (char >= 65) and (char <= 90):
        uppercase += 1
    elif (char >= 97) and (char <= 122):
        lowercase += 1
    elif (char >= 48) and (char <= 57):
        digits += 1
    else:
        symbol += 1

print("Uppercase = ", uppercase)
print("Lowercase = ", lowercase)
print("Digits = ", digits)
print("Symbol = ", symbol)