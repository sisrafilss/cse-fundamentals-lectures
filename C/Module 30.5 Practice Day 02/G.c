#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sereja = 0, dima = 0;
    int i = 0;
    int j = n - 1;

    //3 2 1
    while (i <= j) // i=2, j=1 | sereja=3+1 | dima=2+2
    {
        if (j >= 0 && i < n)
            {
                if (arr[i] > arr[j])
            {
                sereja += arr[i];
                arr[i] = 0;
                i++;

            }
            else
            {
                sereja += arr[j];
                arr[j] = 0;
                j--;

            }
        }

        if (j >= 0 && i < n)
            {
                if (arr[i] > arr[j])
            {
                dima += arr[i];
                arr[i] = 0;
                i++;

            }
            else
            {
                dima += arr[j];
                arr[j] = 0;
                j--;
            }
        }
    }

    printf("%d %d", sereja, dima);

    return 0;
}
