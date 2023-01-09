#include<stdio.h>

int main()
{

    int length;
    printf("Enter the number of students: ");
    scanf("%d", &length);
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

    printf("Size of the array is: %d\n", sizeof(marks)/sizeof(marks[0]));

    return 0;
}
