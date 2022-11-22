#include<stdio.h>

int main()
{
    int limak, bob;
    scanf("%d %d", &limak, &bob);

    int count = 0;

    while(limak <= bob)
    {
        limak *= 3;
        bob *= 2;
        count++;
    }

    printf("%d", count);

    return 0;
}

