# ‘list’ declaration
numbers = [12, 45, 15, 35, 89, 45, 15]
print(numbers)

# ‘set’ declaration
numbers_set = {12, 45, 15, 35, 89, 45, 15}
print(numbers_set) # print -> {35, 89, 12, 45, 15} because ‘set’ doesn't contain repeated value, it contains unique value only

# convert a ‘list’ to ‘set’
set_from_list = set(numbers)

# add a value if the given value is not in the list
numbers_set.add(77)
print(numbers_set) # prints -> {35, 77, 89, 12, 45, 15}

# remove a value
numbers_set.remove(15)
print(numbers_set) # prints -> {35, 77, 89, 12, 45}