
#include<stdio.h>

int main()
{
    int n = 30;
    int sum = 0;

   // int count = 0;

    for (int i = 50; i > n; i--)
    {
        sum += i;
        // count++;
        // printf("Sum: %d, i: %d\n", sum, i);
    }

    printf("Sum: %d\n", sum);
    // printf("Count: %d\n", count);

    return 0;
}

