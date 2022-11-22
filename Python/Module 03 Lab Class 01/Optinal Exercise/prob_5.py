numbers_x = [10, 20, 30, 40, 10]
numbers_y = [75, 65, 35, 75, 30]


def is_same(list):
    if list[0] == list[len(numbers_x) - 1]:
        return True
    else:
        return False


print("Given list: ",numbers_x)
print("result is ", is_same(numbers_x))

print()

print("Given list: ",numbers_y)
print("result is ", is_same(numbers_y))