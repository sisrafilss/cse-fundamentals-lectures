#include<stdio.h>
#include<stdbool.h>

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}


bool is_sorted(int n, int a[])
{
    int count = 0;
    for (int i = 0; i < n-1; i++)
    {
        if (a[i] < a[i + 1])
        {
            count++;
        }
    }

    if (count == (n-1))
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Bubble Sort
void sort(int n, int a[]) {
	for (int steps=0; steps<n; steps++) {
    	for (int i=0; i+1<n; i++) {
        	if (a[i] < a[i+1]) {
            	swap(&a[i], &a[i+1]);
        	}
    		}
//		if (is_sorted(n, a))	break;

//        printf("Steps %d: ", steps+1);
//    	for (int i = 0; i < n; i++)
//        {
//            printf("%d ", a[i]);
//        }
//        printf("\n");

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

    // Bubble sort
    sort(n, a);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}


