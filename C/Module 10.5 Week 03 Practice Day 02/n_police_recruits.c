
#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int police = 0, crime = 0, untreated = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        if (x < 0)
        {
            crime += x;
            if (police > 0)
            {
                untreated = police + crime;
            }
            else
            {
                untreated += x;
            }
        }
        else if (x > 0)
        {
            police += x;
        }
    }

    if (untreated < 0)
    {
        printf("%d", untreated * -1);
    }
    else
    {
        printf("0");
    }

    return 0;
}
