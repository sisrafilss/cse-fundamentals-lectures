#include<stdio.h>
#include<string.h>

struct Date {
    int day;
    int month;
    int year;
};

// structure for Student with nested struct
struct Student {
    char name[100];
    int class;
    int roll;
    struct Date dob; // nested struct for student's date of birth
};

// print date
void print_date(struct Date date)
{
    printf("%d-%d-%d\n", date.day, date.month, date.year);
}

// print student's data
void print_student(struct Student st)
{
    printf("Name: %s\n", st.name);
    printf("Class: %d\n", st.class);
    printf("Roll: %d\n", st.roll);
    printf("Date of birth: ");
    print_date(st.dob);
}

int main()
{
    struct Date dob = {3, 9, 1997};

    // we can add variable in struct by using dot notation (.) for passing a function like below
    struct Student st1 = {
        .class = 9,
        .roll = 3,
        .dob = {3, 9, 1997}
    };

    char name[] = "Israfil Hossen";
    // string needed to copy using strcpy because we can't copy a string directly as it is one kind of array
    strcpy(st1.name, name);

    print_student(st1);

    return 0;
}
