

#include<stdio.h>

int main()
{
    int n = 10;
    int sum = 0;

   // int count = 0;

    for (int i = 0, j = 2; i < n; i++, j += 3)
    {
        sum += j;
        // count++;
        // printf("Sum: %d, i: %d\n", sum, i);
    }

    printf("Sum: %d\n", sum);
    // printf("Count: %d\n", count);

    return 0;
}

