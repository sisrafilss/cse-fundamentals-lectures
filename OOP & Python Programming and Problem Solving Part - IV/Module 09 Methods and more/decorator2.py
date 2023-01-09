def first(func):
    def inner():
        print("first line of inner")
        func()
        print("last line of inner")
    return inner

@first
def print_middle():
    print("print middle line only")

print_middle() 
""" expected: print all three lines because the features of print_middle() function is extended
            first line of inner
            print middle line only
            last line of inner
"""