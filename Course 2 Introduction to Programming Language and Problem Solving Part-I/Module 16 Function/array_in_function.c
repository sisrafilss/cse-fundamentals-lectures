#include<stdio.h>

int get_min(int a, int b)
{
    if (a < b)  return a;
    else        return b;
}

int array_min(int n, int a[])
{
    int min = a[0];
    for (int i = 0; i < n; i++)
    {
        min = get_min(min, a[i]);
    }

    return min;
}

int make_double(int n, int a[])
{
    for (int i = 0; i < n; i++)
    {
        a[i] *= 2;
    }
}

int main()
{
   int array[] = {2, 5, 9, 8, 7, 6};
   int n = 6;
   printf("%d \n", array_min(n, array)); // array passed by reference

   make_double(n, array); // array passed by reference

   for (int i = 0; i < n; i++)
   {
       printf("%d ", array[i]); // will print 4, 10, 18, 14, 12
   }

    return 0;
}

