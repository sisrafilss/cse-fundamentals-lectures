#include<stdio.h>
#include<stdbool.h>


void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

// Bubble Sort
void Sort(int n, int a[])
{
    for (int steps = 0; steps < n; steps++)
    {
        for (int i = 0; i + 1 < n; i++)
        {
            if (a[i] > a[i + 1])
            {
                swap(&a[i], &a[i + 1]);
            }
        }
        // Bubble sort algorithm could be more efficient by using the following function
//         if (is_sorted(n, a))  break;
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

    // Bubble sort
    Sort(n, a);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}




