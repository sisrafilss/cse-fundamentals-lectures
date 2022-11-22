#include<stdio.h>

int main()
{
    int num1, num2;
    char op;
    scanf("%d %c %d", &num1,&op, &num2);

    if (op == '/' && num2 == 0)
    {
        printf("Cannot divide by zero!\n");
        return 1;
    }

    switch(op)
    {
    case '+':
        printf("%d\n", num1 + num2);
        break;
    case '-':
        printf("%d\n", num1 - num2);
        break;
    case '*':
        printf("%d\n", num1 * num2);
        break;
    case '/':
        printf("%d\n", num1 / num2);
        break;
    case '%':
        printf("%d\n", num1 % num2);
        break;
    default:
        printf("Unknown operation!");
        break;
    }

    return 0;
}
