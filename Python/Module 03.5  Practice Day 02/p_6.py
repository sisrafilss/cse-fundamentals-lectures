s1 = input("S1: ")
s2 = input("S2: ")

count = 0

for char in s1:
    found = False
    for c in s2:
        if char == c:
            found = True
            break
    if found: count += 1


if (count == len(s1)):
    print("True")
else:
    print("False")