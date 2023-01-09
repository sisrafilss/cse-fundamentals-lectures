#include<stdio.h>
#include<string.h>

int main()
{
    char fname[8] = "Israfil ";
    char lname[6] = "Hossen";

    strncat(fname, lname, 6);
    fname[14] = '\0';

    printf("%s", fname);

    return 0;
}
