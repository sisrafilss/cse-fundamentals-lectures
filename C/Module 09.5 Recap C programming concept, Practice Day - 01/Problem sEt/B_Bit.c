#include<stdio.h>
#include<string.h>

int main()
{
    int n, X = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char str[4];
        scanf("%s", &str);
        for (int j = 0; j < strlen(str); j++)
        {
            if (str[j] == '+')
            {
                X++;
                break;
            }
            else if (str[j] == '-')
            {
                X--;
                break;
            }
        }
    }

    printf("%d", X);




    return 0;
}
