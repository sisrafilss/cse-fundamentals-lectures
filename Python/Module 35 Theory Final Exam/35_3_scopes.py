from math import pi

print("Value of pi in built-in scope is", pi) # built-in scope
pi = 3.111 # global scope

def outer_func():
    pi = 3.223 # local sope of outer_func function
    print("Value of pi in local scopre is", pi)
    def inenr_func():
        pi = 3.333 # local scope for inner_func function and enclosed scope for outer_func function
        print("Value of pi in enclosed scope is ", pi)
    inenr_func()
outer_func()

print("Value of pi in global scope is", pi) # global scope