#include<stdio.h>
#include<string.h>

int main()
{
    int n = 100000000000;
	int *a = (int*) malloc(n*sizeof(int));

	printf("%d", *a);

    return 0;
}
