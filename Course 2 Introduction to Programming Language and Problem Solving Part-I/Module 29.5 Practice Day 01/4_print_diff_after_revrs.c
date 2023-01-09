#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int rev_arr[n];
    for (int i = 0, j = n - 1; i < n; i++, j--)
    {
        rev_arr[i] = arr[j];
    }

    for (int i = 0; i < n; i++)
    {
      printf("%d ", abs(arr[i] - rev_arr[i]));
    }


    return 0;
}

