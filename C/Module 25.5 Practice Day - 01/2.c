#include<stdio.h>

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

int main()
{
    struct Student peter = {.name = "Peter Parker", .class = 4, .roll = 23, .dob = {16, 10, 1982}};

    printf("%s reads in class %d. His roll is %d and his date of birth is %d-%d-%d\n", peter.name, peter.class, peter.roll, peter.dob.day, peter.dob.month, peter.dob.year);

    return 0;
}
