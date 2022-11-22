#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            int m;
            scanf("%d", &m);
            arr[j] = m;
        }

        int s = arr[0], ans;
        for (int k = 0; k < n; k++)
        {
            if (s != arr[1] && arr[1] == arr[2])
            {
                printf("%d\n", 1);
                break;
            }
            if (arr[k] != s)
            {
                printf("%d\n", k + 1);
                break;
            }
        }
    }

    return 0;
}
