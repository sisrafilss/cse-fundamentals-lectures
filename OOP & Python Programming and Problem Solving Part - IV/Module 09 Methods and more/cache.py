from functools import cache
from time import time

@cache
def fib(n):
    if n <= 1:
        return 1
    return fib(n-1) + fib(n-2)

start = time()
print(fib(35))
end = time()

# before using cash
# print(end - start) # expected (time in second): 5.46990704536438

# after using cache
print(end - start) # expected (tiime in seconds): 0.0