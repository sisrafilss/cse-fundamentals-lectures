
n = int(input("Enter a integer: "))

for i in range(n):
    lst= []
    for num in range(1, n+1):
        if num != 1:
            lst.append(num)
    final_lst = lst[:i] + [1] + lst[i:]
    for j in final_lst: print(j, end="")
    print()