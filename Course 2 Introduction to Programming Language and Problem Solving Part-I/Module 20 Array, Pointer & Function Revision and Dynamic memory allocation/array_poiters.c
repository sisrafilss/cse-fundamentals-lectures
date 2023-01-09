#include<stdio.h>
#include<string.h>

int main()
{
    int a[5] = {1, 2, 3, 4, 5};

    printf("%lld\n", a); // will print the address of the first element of array a

    printf("%lld\n", *a); // will print the value of the address (pointers) a. *a is equavilent to a[0]; similarly *a+1 == a[0]



    return 0;
}
