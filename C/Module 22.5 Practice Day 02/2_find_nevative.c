#include<stdio.h>

int findNegatives(int n, int in[], int out[])
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (in[i] < 0)
        {
            out[j] = in[i];
            j++;
        }
    }
    return j;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int *out = (int*) calloc(n, sizeof(int));
    int negetives = findNegatives(n, a, out);

    printf("%d negative numbers are: ", negetives);
    for (int i = 0; out[i] != 0; i++)
    {
        printf("%d ", out[i]);
    }
    printf("\n");

    return 0;
}
