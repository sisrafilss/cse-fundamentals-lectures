
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

int main()
{
    int n = 5;
    int numbers[10] =  {1, 2, 3, 4, 5};

    right_rotate(n, numbers);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", numbers[i]);
    }

    return 0;
}
