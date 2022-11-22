inp_str = input("Enter your string: ")

output_str = ""

for char in inp_str:
    char = ord(char)
    if (char >= 65) and (char <= 90):
        output_str += (chr(char + 32))
    elif (char >= 97) and (char <= 122):
        output_str += (chr(char - 32))
    else:
        output_str += chr(char)

print(output_str)