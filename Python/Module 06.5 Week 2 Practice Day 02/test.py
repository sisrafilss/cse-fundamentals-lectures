import time

count = 1
while True:
    print(count)
    time.sleep(3)
    count += 1
    if (count == 10):
        break