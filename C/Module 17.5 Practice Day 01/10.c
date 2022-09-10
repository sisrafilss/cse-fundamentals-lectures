#include<stdio.h>

void makePositive(int *a)
{
	if (*a < 0) {
		*a = *a * -1;
	}
}


int main()
{
    int a;
    scanf("%d", &a);

    makePositive(&a);

    printf("%d", a);

    return 0;
}
