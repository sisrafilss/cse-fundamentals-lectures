

#include<stdio.h>

int main()
{
    int arr[] = {10, 20, 50, 40, 50, 10, 40};
    int sz = sizeof(arr) / sizeof(arr[0]);

    int distrinct[100] = {0};
    for (int i = 0; i < sz; i++)
    {
        int x = arr[i];
        distrinct[x]++;
    }

    for (int i = 0; i < 100; i++)
    {
        if (distrinct[i] > 0)
        {
            printf("%d occurs %d times\n", i, distrinct[i]);
        }
    }

    return 0;
}
