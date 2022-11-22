#include<stdio.h>
#include<stdbool.h>

int main()
{
    int year;
    scanf("%d", &year);

    bool is_leap_year = (year % 4 == 0) && (year % 100 != 0 || year % 400 == 0);

    if (is_leap_year)
    {
        printf("Leap year\n");
    }
    else
    {
      printf("Not Leap year\n");
    }

    return 0;
}
