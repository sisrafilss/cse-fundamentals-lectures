#include<stdio.h>

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void sort(int n, int a[]) {
    n = n - 1;
	for (int steps=n, c = 1; steps>=0; steps--, c++) {
    	int minelement = a[steps], pos = steps;
    	for (int i=steps; i>=0; i--) {
        	if (a[i] > minelement) {
            	minelement = a[i];
            	pos = i;
        	}
    	}
    	swap(&a[steps], &a[pos]);

    	printf("Steps %d: ", c);
    	for (int i = 0; i <= n; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
}
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

    sort(n, a);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
