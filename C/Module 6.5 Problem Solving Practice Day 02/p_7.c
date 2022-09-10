#include<stdio.h>

int main()
{
    int a, b, c;
    printf("Enter length of three side: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c && c == a)
    {
        printf("Equilateral\n");
    }
    else if (a == b || b == c || c == a)
    {
        printf("Isosceles \n");
    }
    else
    {
        printf("Scalene \n");
    }

    return 0;
}


