#include<stdio.h>

void right_rotate(int n, int numbers[])
{
    for (int i = 0; i < n - 1; i++)
    {
        int tmp = numbers[i];
        numbers[i] = numbers[i + 1];
        numbers[i + 1] = tmp;
    }
}

void rotate_by_k(long long k, int n, int numbers[])
{
    if (k > n)
    {
        k = k % n;
    }

    for (int i = 0; i < k; i++)
    {
        right_rotate(n, numbers );
    }
}

int main()
{
    int n = 5;
    int numbers[5] =  {1, 2, 3, 4, 5};

    rotate_by_k(1000000001, 5, numbers);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", numbers[i]);
    }

    return 0;
}

