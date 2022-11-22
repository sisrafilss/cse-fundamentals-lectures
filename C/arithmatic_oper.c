#include<stdio.h>

int main() {
    int num1, num2;
    printf("Enter two number separated by a space: ");
    scanf("%d %d", &num1, &num2);

    int jogfol = num1 + num2;
    printf("%d + %d = %d\n", num1, num2, jogfol);

    int biyogfol = num1 - num2;
    printf("%d - %d = %d\n", num1, num2, biyogfol);

    int gunfol = num1 * num2;
    printf("%d * %d = %d\n", num1, num2, gunfol);

    int vagfol = num1 / num2;
    printf("%d / %d = %d\n", num1, num2, vagfol);

    int vagsesh = num1 % num2;
    printf("%d %% %d = %d\n", num1, num2, vagsesh);

    return 0;
}
