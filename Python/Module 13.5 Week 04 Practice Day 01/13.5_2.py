
def first(func):
    def inner():
        print("first line of inner")
        func()
        print("last lineof inner")
    return inner

@first
def middle():
    print("middle line")

middle()