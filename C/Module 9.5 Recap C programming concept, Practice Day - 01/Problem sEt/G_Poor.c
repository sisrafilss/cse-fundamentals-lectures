#include<stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int n = 0;
    if (a == b)
    {
        n++;
    }
    if (a == c)
    {
        n++;
    }
    if (b == c)
    {
        n++;
    }

    if (n == 1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }



    return 0;
}
