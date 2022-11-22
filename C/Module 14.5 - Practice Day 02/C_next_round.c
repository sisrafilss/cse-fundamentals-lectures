#include<stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int s;
        scanf("%d", &s);
        if (s > 0 && s > k)
        {
            ans++;
        }

    }

    printf("%d", ans);

    return 0;
}

