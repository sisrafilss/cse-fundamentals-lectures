#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int fibonacci[n];
    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for (int i = 2; i < n; n++)
    {
        fibonacci[i] = fibonacci[i - 2] + fibonacci[i - 1];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibonacci[i]);
    }

    return 0;
}
