#include<stdio.h>
#include<stdbool.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    char name[100];
    int class;
    int roll;
    struct Date dob;

};

bool isBirthday(struct Date date, struct Student student)
{
    if (date.day == student.dob.day && date.month == student.dob.month && date.year == student.dob.year)
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
    struct Student student = {.name = "Peter Parker", .class = 4, .roll = 23, .dob = {16, 10, 1982}};
    struct Date date = {16, 10, 1982};

    if (isBirthday(date, student))
    {
        printf("Happy birthday to you %s\n", student.name);
    }
    else
    {
        printf("Sorry! Enter another date\n");
    }

    return 0;
}
