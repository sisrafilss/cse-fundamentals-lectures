inp = int(input("Input: "))

def print_stars(num):
    for i in range(num):
        print("*", end="")

for num in range(1, inp+1):
    print_stars(num)
    print("")

for num in range(inp-1, 0, -1):
    print_stars(num)
    print("")
