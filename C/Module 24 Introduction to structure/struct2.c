#include<stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

int main()
{
    struct Date today;
    int days;
    printf("Start Date: ");
    scanf("%d %d %d", &today.day, &today.month, &today.year);

    printf("How many days? ");
    scanf("%d", &days);

    struct Date next_day = today;

    int days_in_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (int i = 0; i < days; i++)
    {
        if (next_day.day != days_in_month[next_day.month - 1])
        {
            next_day.day++;
        }
        else if (next_day.month != 12)
        {
            next_day.day = 1;
            next_day.month++;
        }
        else
        {
            next_day.day = 1;
            next_day.month = 1;
            next_day.year++;
        }

        printf("%d-%d-%d\n", next_day.day, next_day.month, next_day.year);
    }

    return 0;
}
