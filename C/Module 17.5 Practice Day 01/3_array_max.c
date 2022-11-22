#include<stdio.h>

int maximum(int n, int numbers[])
{
    int max = numbers[0];
    for (int i = 0; i < n; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }
    return max;
}

int main()
{
    int n = 10;
    int numbers[10] = {3, 9, 33, 88, 4, 9, 6, 99, 101, 405};

    int max = maximum(n, numbers);

    printf("Maximum: %d\n", max);

    return 0;
}
