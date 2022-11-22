first_num = 0
second_num = 1

print(first_num, end=" ")
print(second_num, end=" ")

for i in range(8):
    third_num = first_num + second_num
    print(third_num, end=" ")
    first_num = second_num
    second_num = third_num