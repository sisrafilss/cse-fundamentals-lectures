#include<stdio.h>

struct Student
{
    char name[100];
    int id;
    int marks;
};

struct Unique_Student
{
    char name[100];
    int id;
    int total_marks;
};

int main()
{
    int n;
    scanf("%d", &n);
    struct Student students[n];
    struct Unique_Student sakib = {"Sakib", 1, 0};
    struct Unique_Student rakib = {"Rakib", 2, 0};

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        scanf("%s %d %d", &students[i].name, &students[i].id, &students[i].marks);
        if (students[i].id == sakib.id)
        {
            sakib.total_marks += students[i].marks;
        }
        else
        {
            rakib.total_marks += students[i].marks;
        }
    }



        printf("%s %d %d\n %s %d %d\n", sakib.name, sakib.id, sakib.total_marks, rakib.name, rakib.id, rakib.total_marks);


    return 0;
}

