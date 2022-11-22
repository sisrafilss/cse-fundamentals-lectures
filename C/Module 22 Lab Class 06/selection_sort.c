#include<stdio.h>

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

// Selection Sort
void Sort(int n, int a[])
{
    for (int steps = 0; steps < n; steps++)
    {
        int min_element = a[steps], position = steps;
        for (int i = steps; i < n; i++)
        {
           if (a[i] < min_element)
           {
               min_element = a[i];
               position = i;
           }

        }
        // Swap the element
        swap(&a[steps], &a[position]);
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

    // Selection sort
    Sort(n, a);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}





