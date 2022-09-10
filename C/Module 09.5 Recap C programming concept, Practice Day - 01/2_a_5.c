#include<stdio.h>

int main()
{
    int sum = 0;
    int i = 100;
    while(i > 0)
    {
        sum += i;
        i--;
    }

    printf("Sum: %d\n", sum);

    return 0;
}
