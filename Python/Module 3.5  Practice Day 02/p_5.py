s1 = input("S1: ")
s2 = input("S2: ")

s2_len = len(s2)

output = ""

for i in range(len(s1)):
    output += s1[i]
    output += s2[s2_len - 1]
    s2_len -= 1

print(output)
