#include<stdio.h>
#include<string.h>

int a, b, c;

void sort(int a, int b)
{
    if (a < b)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }
    else if (a < c)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }
}

int main()
{
    int a, b, c;
    scanf("%d %d, %d", &a, &b, &c);

    sort(a, b);

    printf("Sorted: %d %d", a, b);

    return 0;
}
