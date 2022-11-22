inp_str = input("Enter the string: ")

print(f"Orginal String is  {inp_str}")
print("Printing only even index chars")

for i in range(len(inp_str)):
    if i % 2 == 0:
        print(inp_str[i])
