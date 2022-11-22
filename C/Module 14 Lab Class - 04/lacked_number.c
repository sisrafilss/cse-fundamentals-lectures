#include<stdio.h>

int main()
{
    char str[10];
    scanf("%s", str);

    int frq[10] = {0};
    for (int i = 0; i < 9; i++)
    {
        frq[str[i] - '0']++;
//        printf("%d\n", str[i] - '0');
    }

    for (int i = 0; i < 10; i++)
    {
        if (frq[i] == 0)
        {
            printf("%d", i);
        }
    }

    return 0;
}
