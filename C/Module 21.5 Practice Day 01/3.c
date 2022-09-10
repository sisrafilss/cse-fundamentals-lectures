#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d", &n);

    int *a = (int*) malloc(n*sizeof(int));

    double *b = (double*) malloc(n * sizeof(double));
//    b[0] = 1;
//    b[1] = 2;

    int sz = sizeof(*b);

    printf("Size: %d\n", sz);

    return 0;
}
