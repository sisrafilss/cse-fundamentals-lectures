#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int scores[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &scores[i]);
    }
    // 100 50 200 150 200
    int amazing = 0;
    for (int i = 1; i < n; i++)
    {
        int min = scores[i];
        for (int j = 0; j <= i; j++)
           {
               if (scores[j] < min)
               {
                   min = scores[j]
               }
           }

    }

    printf("%d", amazing);

    return 0;
}
