#include<stdio.h>
#include<stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);

    int freq[n + 1];
    for (int i = 0; i <= n; i++)
    {
        freq[i] = 0;
    }

    int p;
    scanf("%d", &p);
    for (int i = 0; i < p; i++)
    {
        int a;
        scanf("%d", &a);
        freq[a]++;
    }


    int q;
    scanf("%d", &q);
    for (int i = 0; i < q; i++)
    {
        int b;
        scanf("%d", &b);
        freq[b]++;
    }

    for (int i = 1; i <= n; i++)
    {
        if (freq[i] == 0)
        {
            printf("Oh, my keyboard!");
            return 0;
        }
    }
    printf("I become the guy.");


    return 0;
}
