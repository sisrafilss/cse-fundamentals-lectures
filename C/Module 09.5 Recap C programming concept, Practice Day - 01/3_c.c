#include<stdio.h>

int main()

{
    int n = 60;

    int i = 0;
    while (i < n)
    {
        i++;
        if (60 % i == 0) continue;
        printf("%d ", i);

    }

    return 0;
}

