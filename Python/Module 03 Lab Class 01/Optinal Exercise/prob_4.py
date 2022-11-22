inp_str = input("Enter a string: ")

def remove_chars(str, num):
    final = ""
    while num != len(str):
        final += str[num]
        num += 1
    return final

print(remove_chars(inp_str, 2))