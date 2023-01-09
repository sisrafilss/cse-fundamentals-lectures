list1 = ["M", "na", "i", "Bo"]
list2 = ["y", "me", "s", "nd"]

final = []

for i, element in enumerate(list1):
    final.append(element + list2[i])

print(final)
