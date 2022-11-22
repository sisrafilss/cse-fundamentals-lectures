#include<stdio.h>

int main()
{
    int n = 20;
    int sum = 0;
    int i = 1;
    int upper = 50;
    while(i <= n)
    {
        sum += upper;
        i++;
        upper--;
    }

    printf("Sum: %d\n", sum);

    return 0;
}
