#include<stdio.h>
#include<string.h>

void makeCopy(int n, int input[])
{
    for (int i = 0; i < n; i++)
    {
        input[i] = input[i] * 2;
    }

    return input;
}

int main()
{
    int n;
    scanf("%d", &n);

    int *input = (int*) malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &input[i]);
    }

    makeCopy(n, input);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", input[i]);
    }

    return 0;
}

