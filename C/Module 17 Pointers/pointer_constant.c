#include<stdio.h>

int main()
{
    const N = 20;
    const int* const pN = &N;

    printf("%p has value %d\n", pN, *pN);

    int M = 100;
    pN = &M; // through an error, because we can't chage either the value of pN or pointer of pN because of declaring both using const
    printf("%p has value %d\n", pN, *pN);

    return 0;
}
