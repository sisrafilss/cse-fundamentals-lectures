#include<stdio.h>

int main()
{
    int n = 29;
    int sum = 0;
    int i = 1;
    while(i <= n)
    {
        sum += i;
        i += 2;
    }

    printf("Sum: %d\n", sum);

    return 0;
}
