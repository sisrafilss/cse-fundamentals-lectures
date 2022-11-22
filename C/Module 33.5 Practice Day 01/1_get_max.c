#include<stdio.h>

int get_max(int a, int b)
{
    if (a > b)  return a;
    else        return b;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", get_max(a, b));

    return 0;
}
