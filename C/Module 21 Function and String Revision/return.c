#include<stdio.h>
#include<stdlib.h>

int * makeSquares(int n)
{
    int *squares = (int *) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", i);
        squares[i] = i * i;
    }
    return squares;
}

int main()
{
    int n;
    scanf("%d", &n);

    int * sq;
    sq = makeSquares(n);

    for (int i = n; i < n; i++)
    {
        printf("%d ", sq[i]);
    }

    return 0;
}
