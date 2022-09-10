#include<stdio.h>

int main()
{
    int n = 100;
    int sum = 0;
    int i = 1;
    while(i <= n)
    {
        sum += i;
        i++;
    }

    printf("Sum: %d\n", sum);

    return 0;
}
