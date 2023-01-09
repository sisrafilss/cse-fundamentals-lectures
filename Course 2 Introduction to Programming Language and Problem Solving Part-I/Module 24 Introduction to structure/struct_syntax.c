#include<stdio.h>

// structure declaration
struct Date {
    int day;
    int month;
    int year;
};

int main()
{
    struct Date birthday;
    birthday.day = 3;
    birthday.month = 9;
    birthday.year = 1997;

    printf("Birthday: %d/%d/%d\n", birthday.day, birthday.month, birthday.year);

    // Structure assignment - shortcut method
    struct Date today = {03, 06, 2022};

    // Structure re-assigment
    today = (struct Date) {4, 6, 2022};

    printf("Today: %d-%d-%d\n", today.day, today.month, today.year);

    return 0;
}
