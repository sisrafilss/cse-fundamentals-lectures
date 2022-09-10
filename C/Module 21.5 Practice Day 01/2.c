#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int prod=1;
    int *pprod = &prod;
    for (int i=0; i<n; i++) {
        *pprod = *pprod * a[i];
    }
    printf("%d", *pprod);


    return 0;
}
