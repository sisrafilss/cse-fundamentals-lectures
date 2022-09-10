
#include<stdio.h>

int main()
{
    int price, bananas;
    long long money_has;
    scanf("%d %lld %d", &price, &money_has, &bananas);

    long long total_price = 0;

    for (int i = 1; i <= bananas; i++)
    {
        total_price += (price * i);
    }

    long long need_to_borrow = money_has - total_price;

    if (need_to_borrow < 0)
    {
        printf("%lld", need_to_borrow * -1);
    }
    else
    {
        printf("%d", 0);
    }

    return 0;
}

