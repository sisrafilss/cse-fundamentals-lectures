#include<stdio.h>

void set_min_max(int *a, int *b)
{
    int temp = *a;
    if (*b < *a)
    {
         *a = *b;
         *b = temp;
    }

}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    set_min_max(&a, &b);

    printf("Min = %d, Max = %d\n", a, b);

    return 0;
}
