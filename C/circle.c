/*
    Write a program to find the perimeter and the area of a circle.
    The program will ask the user for a radius, and then print the perimeter and area.

    Sample Interaction:
    Enter radius: 1
    Perimeter = 6.28
    Area = 3.14

    Remember?
    Perimeter = 2 * pi * r;
    Area = pi * r^2
*/

#include<stdio.h>

int main() {
    double radius;
    printf("Enter radius: ");
    scanf("%lf", &radius);

    const double PI = 3.1416;

    double perimeter = 2 * PI * radius;
    printf("Perimeter = %.2llf\n", perimeter);

    double area = PI * radius * radius;
    printf("Area = %.2lf\n", area);

}







