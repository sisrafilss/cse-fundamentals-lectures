#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int total = a + b;

    printf("%d %d", total - a - 1, total - b - 1);

    return 0;
}
