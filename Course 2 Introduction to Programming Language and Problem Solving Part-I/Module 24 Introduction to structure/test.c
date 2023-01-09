#include<stdio.h>

struct site

{

    char name[] = "Hello";

    int no_of_pages = 200;

};

int main()

{

    struct site ptr;

    printf("%d ", ptr.no_of_pages);

    printf("%s", ptr.name);

    return 0;

}
