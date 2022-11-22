#include<stdio.h>

int main()
{
    int n, h;
    scanf("%d %d", &n, &h);

    int width = 0;
    for (int i = 0; i < n; i++)
    {
        int height;
        scanf("%d", &height);

        if (height > h)
        {
            if (height % h == 0)
            {
                width = width + (height / h);
            }
           else
           {
               width = width + (height / h + 1);
           }
        }
        else
        {
            width++;
        }


    }
// sdfsdf
    printf("%d", width);
    return 0;
}




