#include<stdio.h>

int main()
{
    int value = 100;
    int* pval = &value; // * is used to declare the pointer and & denotes the address of the variable value

    printf("%d\n", pval);
    printf("%d\n", *pval); // * is used here to de-reference the pointer value
    printf("%d", value);

    return 0;
}
