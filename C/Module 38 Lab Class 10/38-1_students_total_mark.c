#include<stdio.h>

struct Student
{
    char name[100];
    int id;
    int marks;
    int total_marks;
};

int main()
{
    int n;
    scanf("%d", &n);
    struct Student students[n];

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        scanf("%s %d %d", &students[i].name, &students[i].id, &students[i].marks);
        for (int j = 0; j < i; j++)
        {
            if (students[i].id == students[j].id)
            {
                sum += students[j].marks;
            }
        }
        students[i].total_marks = students[i].marks + sum;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%s %d %d %d\n", students[i].name, students[i].id, students[i].marks, students[i].total_marks);
    }

    return 0;
}
