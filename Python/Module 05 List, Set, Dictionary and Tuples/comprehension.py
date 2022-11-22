numbers = [11, 13, 27, 15, 12, 49, 35] # List

# result will be a list where elements are odd number and divisible by 5
result = [num for num in numbers if num % 2 == 1 if num % 5 == 0]
print(result) # print -> [15, 35]