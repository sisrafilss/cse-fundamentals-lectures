
#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int beshi = a - b;

    if (beshi == 0)
    {
        printf("1");
    }
    else if (beshi > 0)
    {
        int times = 1;
        for (int i = 0; i < beshi; i++)
        {
            times *= 32;
        }
        printf("%d", times);
    }


    return 0;
}


