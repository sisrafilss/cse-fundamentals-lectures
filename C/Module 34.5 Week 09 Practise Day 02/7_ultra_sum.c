#include<stdio.h>

void ultra_sum(int a, int b, int *sum, int *mul)
{
    *sum = a + b;
    *mul = a * b;
}

int main()
{
    int a, b, sum, mul;
    scanf("%d %d", &a, &b);

    ultra_sum(a, b, &sum, &mul);

    printf("%d + %d = %d\n", a, b, sum);
    printf("%d * %d = %d\n", a, b, mul);

    return 0;
}
