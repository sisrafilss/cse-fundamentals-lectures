# optional/default parameters
def multiply(num1, num2 = 1):
    return num1 * num2

# if we don't pass the second parameter, the function use the given default value of it
result = multiply(5)
print(result)


# We can explicitly say which value will assign to which parameter while calling the function, don't need to maintan the sequence of arguments
result2 = multiply(num2 = 10, num1 = 20)
print(result2)


# passing multiple arguments
# adding star sign (*) befor the number parameter means numbers will be a tupel of numbers passed as arguments in this function
def multiplication(*numbers):
    result = 1
    for num in numbers:
        result = result * num
    return result

# passing multiple arguments
product = multiplication(3, 5, 9)
print(product)


