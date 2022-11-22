print("Printing current and previous number sum in a range(10)")



for i in range(11):
    current_number = i
    previous_number = i - 1
    if current_number == 0:
        previous_number = 0
    sum = current_number + previous_number
    print(f"Current Number {current_number} Previous Number  {previous_number}  Sum:  {sum}")