#include<stdio.h>

int main(void) {
    int marks_english, marks_math;

    printf("Enter marks in English: ");
    scanf("%d", &marks_english);

    printf("Enter marks in Math: ");
    scanf("%d", &marks_math);

    int marks_total = marks_english + marks_math;

    printf("Total Marks is %d", marks_total);


}
