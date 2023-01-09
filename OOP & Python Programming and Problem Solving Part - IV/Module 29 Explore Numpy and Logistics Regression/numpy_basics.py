import numpy as np

# python list
py_list = [1, 2, 10, 65, 99]

# numpy array and some of their opeartions
np_list = np.array([1, 2, 7, 15, 65, 99]) # [ 1  2  7 15 65 99]
ten_zeros = np.zeros(10) # [0. 0. 0. 0. 0. 0. 0. 0. 0. 0.]
fifteen_ones = np.ones(15) # [1. 1. 1. 1. 1. 1. 1. 1. 1. 1. 1. 1. 1. 1. 1.]
sequence = np.arange(16) # [ 0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15]
stepper = np.arange(0, 51, 5) # [ 0  5 10 15 20 25 30 35 40 45 50]
spaced = np.linspace(1, 100, num=5) # [  1.    25.75  50.5   75.25 100.  ]

