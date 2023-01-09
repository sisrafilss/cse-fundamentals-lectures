#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char b[101];
        scanf("%s", b);

        printf("%c%c", b[0], b[1]);
        for (int j = 3, k = strlen(b); j < k; j += 2)
        {
            printf("%c", b[j]);
        }
        printf("\n");
    }

    return 0;
}
