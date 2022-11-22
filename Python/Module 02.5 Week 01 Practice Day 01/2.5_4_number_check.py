num = input('Enter input: ')

while True:
    if num == 'Quit':
        break

    if int(num) < 0:
        print(f'{num} is negative')
    elif int(num) == 0:
        print(f'{num} is ZERO')
    elif int(num) > 0:
        print(f'{num} is positive')
        
    num = input('Enter input: ')
    