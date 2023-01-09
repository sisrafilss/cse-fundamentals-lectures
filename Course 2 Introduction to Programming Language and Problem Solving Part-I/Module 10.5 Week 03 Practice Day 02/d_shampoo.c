#include<stdio.h>

int main()
{
    int v, a, b, c;
    scanf("%d %d %d %d", &v, &a, &b, &c);

    while (v >= 0)
    {
        if (v < a)
        {
            printf("F");
            break;
        }
        v -= a;

        if (v < b)
        {
            printf("M");
            break;
        }
        v -= b;

        if (v < c)
        {
            printf("T");
            break;
        }
        v -= c;
    }


    return 0;
}

