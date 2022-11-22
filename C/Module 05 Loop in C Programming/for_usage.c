#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
        printf("%d \t\t %d\n", i, sum);
    }
    printf("Sum = %d", sum);
    return 0;
}
