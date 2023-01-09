class Parent:
    counter = 0
    def __init__(self, no):
        Parent.counter += 1
    
    def __del__(self):
        Parent.counter -= 1


child1 = Parent(1)
child12 = Parent(2)
child3 = Parent(3)

del child3

child4 = Parent(4)

print(Parent.counter)