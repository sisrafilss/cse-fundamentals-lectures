#include<stdio.h>

int main()
{
    int limit, months;
    scanf("%d %d", &limit, &months);

    int remaining = 0;
    for (int m = 1; m <= months; m++)
    {
        int used;
        scanf("%d", &used);
        remaining = remaining + (limit - used);

//        printf("remaining = %d\n", remaining);

    }

    printf("%d", limit + remaining);

    return 0;
}
