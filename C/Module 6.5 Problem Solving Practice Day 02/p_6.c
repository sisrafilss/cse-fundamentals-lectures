#include<stdio.h>

int main()
{
    int tmp;
    printf("Enter Temparature: ");
    scanf("%d", &tmp);

    if (tmp < 0)
    {
        printf("Freezing weather\n");
    }
    else if (tmp >= 0 && tmp <= 10)
    {
        printf("Very Cold weather\n");
    }
    else if (tmp >= 10 && tmp <= 20)
    {
        printf("Cold weather\n");
    }
     else if (tmp >= 20 && tmp <= 30)
    {
        printf("Normal in Temp\n");
    }
     else if (tmp >= 30 && tmp <= 40)
    {
        printf("Its Hot\n");
    }
    else if (tmp >= 30 && tmp <= 40)
    {
        printf("Its Hot\n");
    }
    else if (tmp > 40)
    {
        printf("Its Very Hot\n");
    }


    return 0;
}

