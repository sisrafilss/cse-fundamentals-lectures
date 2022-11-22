#include<stdio.h>

int main()

{
    int n = 100;

    int i = 0;
    while (i < n)
    {
        i++;
        if (i % 2 == 0) continue;
        printf("%d ", i);

    }

    return 0;
}
