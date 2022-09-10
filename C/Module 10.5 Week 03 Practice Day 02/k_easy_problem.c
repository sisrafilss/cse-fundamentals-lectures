#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d", &n);

    int is_easy = 0;
    for (int i = 0; i < n; i++)
    {
       int opinion;
       scanf("%d", &opinion);
       is_easy += opinion;
    }

    if (is_easy == 0)
    {
        printf("EASY");
    }
    else
    {
        printf("HARD");
    }

    return 0;
}
