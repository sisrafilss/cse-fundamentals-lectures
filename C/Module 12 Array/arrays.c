#include<stdio.h>

int main()
{
    int length = 3;
    int marks[length];

    for (int i = 0; i < length; i++)
    {
        printf("Enter student %d marks: ", i+1);
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < length; i++)
    {
        printf("Student %d got %d marks\n", i+1, marks[i]);
    }

    return 0;
}
