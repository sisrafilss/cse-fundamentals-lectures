#include<stdio.h>
#include<stdbool.h>

bool is_sorted(int n, int a[])
{
    int count = 0;
    for (int i = 0; i < n-1; i++)
    {
        if (a[i] < a[i + 1])
        {
            count++;
        }
    }

    if (count == (n-1))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    if (is_sorted(n, a))
    {
        printf("Sorted\n");
    }
    else
    {
        printf("Un-sorted\n");
    }



    return 0;
}
