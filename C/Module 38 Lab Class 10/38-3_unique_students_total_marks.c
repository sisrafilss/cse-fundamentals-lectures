#include<stdio.h>
#include<string.h>
#include<stdbool.h>

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
    struct Unique_Student unique_students[n];
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        scanf("%s %d %d", &students[i].name, &students[i].id, &students[i].marks);

        bool found = false;
        for (int j = 0; j < k; j++)
        {
            if (students[i].id == unique_students[j].id)
            {
                unique_students[j].total_marks += students[i].marks;
                found = true;
            }
        }
        if (!found)
        {
            strcpy(unique_students[k].name, students[i].name);
            unique_students[k].id = students[i].id;
            unique_students[k].total_marks = students[i].marks;
            k++;
        }
    }


    printf("\n\n");
    for (int i = 0; i < k; i++)
    {
        printf("%s %d %d\n", unique_students[i].name, unique_students[i].id, unique_students[i].total_marks);
    }


    return 0;
}

/*
Sample Input:
8
Rakib 410415 90
Sakib 410429 88
Akib 410419 89
Rakib 410415 82
Akib 410419 79
Rakib 410415 92
Sakib 410429 72
Munna 410411 99

Sample Output:
Rakib 410415 264
Sakib 410429 160
Akib 410419 168
Munna 410411 99
*/

