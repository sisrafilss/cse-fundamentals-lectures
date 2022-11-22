#include<stdio.h>

int main()
{
    int n = 10;
    int sum = 0;
    int i = 1;
    int increase = 2;
    while(i <= n)
    {
        sum += increase;
        i++;
        increase += 3;
    }

    printf("Sum: %d\n", sum);

    return 0;
}
