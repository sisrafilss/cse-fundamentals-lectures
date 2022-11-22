import math
import time

def timer(func):
    def inner(*args, **kargs):
        print("Time Start")
        start = time.time()
        func(*args, **kargs)
        end = time.time()
        print(f"Time End. Total time required {end - start}")
    return inner

@timer
def get_factorial(n):
    result = math.factorial(n)
    print(f"factorial of {n} is {result}")

get_factorial(5)
""" expected output:
        Time Start
        factorial of 5 is 120
        Time End. Total time required 0.0
"""
