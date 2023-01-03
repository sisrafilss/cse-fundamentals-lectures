from threading import Thread

def f1():
    for i in range(5):
        print(f"f1 - {i}")
 
def f2():
    for i in range(5):
        print(f"f2 - {i}")
 
def f3():
    for i in range(5):
        print(f"f3 - {i}")
       
def f4():
    for i in range(5):
        print(f"f4 - {i}")

t1 = Thread(target=f1)
t2 = Thread(target=f2)
t3 = Thread(target=f3)
t4 = Thread(target=f4)

t1.start()
t2.start()
t3.start()
t4.start()

