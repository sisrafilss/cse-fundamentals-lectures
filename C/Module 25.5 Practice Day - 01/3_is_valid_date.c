#include<stdio.h>
#include<stdbool.h>

struct Date
{
    int day;
    int month;
    int year;
};

bool is_day_valid(int day, int month)
{
    int days_in_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (day >= 1 && month >= 1 && month <= 12 && day <= days_in_month[month - 1])
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool is_leap_year(int year)
{
    if (year % 4 == 0 && year % 100 != 0)
    {
        return true;
    }
    else if (year % 400 == 0)
    {
        return true;
    }
    {
        return false;
    }
}

bool isValidDate(struct Date date)
{
    if (date.day == 29 && date.month == 2 && is_leap_year(date.year))
    {
        return true;
    }
    if (is_day_valid(date.day, date.month))
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    struct Date date = {29, 2, 2000};
    if (isValidDate(date))
                    {
                        printf("Date is valid\n");
                    }
                    else
                    {
                        printf("Date is invalid.\n");
                    }

    return 0;
}
