
# # Receiving a function as parameter
# def do_something(work):
#     print("work start here")
#     work() # calling the function
#     print("done with the work")

# def another():
#     print("I am another function")

# passing a function in another function as argument
# do_something(another)

# # Declaring a function into another function and call it
# def do_something():
#     print("Inside the first function")

#     def nested_function():
#         print("I am nested function")
#     nested_function()

#     print("done with the work")

# do_something()


# We can also return a function from another function
def first_function():
    print("first function started")

    def second_function():
        print("I am from second function")

    print("first function end")
    return second_function

# first() holds the nsecond_function() declared in first_function()
first = first_function()
first() # expected: I am from second function





