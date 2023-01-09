#include<stdio.h>
#include<string.h>

void makeCopy(int n, int input[], int output[] )
{
    for (int i = 0; i < n; i++)
    {
        output[i] = input[i];
    }

    return output;
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

    int *output = (int*) malloc(n * sizeof(int));
    makeCopy(n, input, output);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", output[i]);
    }

    return 0;
}
