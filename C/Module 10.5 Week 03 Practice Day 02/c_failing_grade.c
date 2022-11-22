#include<stdio.h>

int main()
{
    int n, p;
    scanf("%d %d", &n, &p);

    int failed = 0;

    for (int i = 0; i < n; i++)
    {
        int number;
        scanf("%d", &number);
        if (number < p)
        {
            failed++;
        }
    }

    printf("%d", failed);

    return 0;
}
