#include<stdio.h>

int main()
{
    int val1, val2;
    int *pval1 = &val1;
    int *pval2 = &val2;

    printf("pval1 => %lld, pval2 => %lld\n", pval1, pval2); // will print pval1 => 6422028, pval2 => 6422024


    pval1++; // will increase 4, because int type variable need 4 bytes in the memory.
    pval2--; // similarly it will decrease 4, because int type variable need 4 bytes in the memory.

    printf("pval1 => %lld, pval2 => %lld\n", pval1, pval2); // will print, pval1 => 6422036, pval2 => 6422020

    return 0;
}
