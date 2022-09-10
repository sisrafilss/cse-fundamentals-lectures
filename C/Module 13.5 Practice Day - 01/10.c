#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    char smallest[40];
    for (int i = 0; i < n; i++)
    {
        char str[50];
        scanf("%s", str);
        strcpy(smallest, str);
        if (strcmp(str, smallest) < 0)
        {
            strcpy(smallest, str);
        }
    }
    printf("\n");
    printf("Lexicographically smallest string is %s", smallest);

    return 0;
}
