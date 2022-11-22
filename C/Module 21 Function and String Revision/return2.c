#include<stdio.h>

int * make_squares(int n) // return type is a pointer int
{
    int *squares = (int *) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        squares[i] = i*i;
    }
    return squares;
}

int main()
{
    int n;
    scanf("%d", &n);

    int *sq;
    sq = make_squares(n); // capture the pointer aka array in sq pointer variable.

    for (int i = 0; i < n; i++)
    {
        printf("%d ", sq[i]);
    }

    return 0;
}
