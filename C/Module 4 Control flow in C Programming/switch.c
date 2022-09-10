#include<stdio.h>

int main()
{
    int num1, num2;
    char operation;
    scanf("%d %c %d", &num1, &operation, &num2);

    switch(operation) {
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
        default:
            printf("Unknown Operation!\n");
            break;

    }

    return 0;
}
