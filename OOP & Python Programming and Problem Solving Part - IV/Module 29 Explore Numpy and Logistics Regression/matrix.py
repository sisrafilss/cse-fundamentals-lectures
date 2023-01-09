import numpy as np

one_d = np.array([1, 2, 3, 4, 5, 6])
two_d = np.array([[1, 3], [2, 4], [3, 6]])
three_d = np.array([
    [[1, 3], [2, 4], [3, 6]],
    [[1, 3], [2, 4], [3, 6]],
    [[1, 3], [2, 4], [3, 6]]
])

shaped = one_d.reshape(3, 2)
changed = np.flip(shaped)
add = two_d + changed
multiply = two_d * changed

back_to_one = add.flatten()

# dimention
print(three_d.ndim) # 3

# number of items
print(one_d.size) # 6

# shape
print(two_d.shape)

# data type
print(one_d.dtype) # int32

# change data type
changed_type = one_d.astype('f')
print(changed_type.dtype) # float32

# copy
copy_of_two_d = np.copy(two_d)
print(copy_of_two_d)

# sort - one_d or multiple_d can sorted
sorted = np.sort([22, 99, 1, 3, 5, 11])
print(sorted)



