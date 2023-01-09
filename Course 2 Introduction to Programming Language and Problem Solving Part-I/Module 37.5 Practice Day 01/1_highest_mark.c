#include<stdio.h>

struct Student
{
    char name[100];
    int marks;
    int roll;
    char section;
    int whichClass;
};


int main()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < 3; i++)
    {
        scanf("%s %d %d %c %d", &students[i].name, &students[i].marks, &students[i].roll, &students[i].section, &students[i].whichClass);
    }

    int idx_of_highest = 0, idx_of_lowest = 0;
    int highest = students[0].marks;
    int lowest = students[0].marks;
    for (int i = 0; i < n; i++)
    {
        if (students[i].marks > highest)
        {
            highest = students[i].marks;
            idx_of_highest = i;
        }
        if (students[i].marks < lowest)
        {
            lowest = students[i].marks;
            idx_of_lowest = i;
        }
    }

    printf("Highest %s %d %d %c %d\n", students[idx_of_highest].name, students[idx_of_highest].marks, students[idx_of_highest].roll, students[idx_of_highest].section, students[idx_of_highest].whichClass);
    printf("Highest %s %d %d %c %d\n", students[idx_of_lowest].name, students[idx_of_lowest].marks, students[idx_of_lowest].roll, students[idx_of_lowest].section, students[idx_of_lowest].whichClass);


    return 0;
}
