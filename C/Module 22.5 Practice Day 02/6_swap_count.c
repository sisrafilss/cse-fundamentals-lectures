#include<stdio.h>

void swap(int *a, int *b)
{
    static int count = 0;
    int tmp = *a;
    *a = *b;
    *b = tmp;
    count++;
    printf("Swap is called: %d\n", count);
}

// Selection sort
void selection_sort(int n, int a[]) {
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
}
}

// Bubble Sort
void bubble_sort(int n, int a[]) {
	for (int steps=0; steps<n; steps++) {
    	for (int i=0; i+1<n; i++) {
        	if (a[i] > a[i+1]) {
            	swap(&a[i], &a[i+1]);
        	}
        }
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

//    selection_sort(n, a);

    bubble_sort(n, a);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
