#include<stdio.h>
#include<string.h>

// struct for storing Date
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

// input date - prompt user for input date
struct Date input_date(void)
{
    struct Date date;
    scanf("%d %d %d", &date.day, &date.month, &date.year);
    return date;
};

// print date
void print_date(struct Date date)
{
    printf("%d-%d-%d\n", date.day, date.month, date.year);
}

// input student data - prompt user to input student data
struct Student input_student(void)
{
    struct Student st;
    printf("Name: ");
    gets(st.name);
    gets(st.name);

    printf("Class: ");
    scanf("%d", &st.class);

    printf("Roll: ");
    scanf("%d", &st.roll);

    printf("Date of birth: ");
    st.dob = input_date();

    return st;
};

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
    int n;
    printf("Enter the number of student: ");
    scanf("%d", &n);

    // create an array type Student for storing students data
    struct Student students[n];

    // input for n number of student
    for (int i = 0; i < n; i++)
    {
        printf("Enter student %d info\n", i + 1);
        students[i] = input_student();
        printf("\n");
    }

    // print students information
    for (int i = 0; i < n; i++)
    {
        print_student(students[i]);
        printf("\n");
    }

    return 0;
}
