#include<stdio.h>
#include<stdbool.h>

int main()
{
    int year;
    scanf("%d", &year);

    for (int i = year + 1; ; i++)
    {
        int freq[10] ={0};
        int cur_year = i;
        bool repeat = false;
        while (cur_year > 0)
        {
             int d = cur_year % 10;
             cur_year /= 10;
             freq[d]++;

             if (freq[d] >= 2)
             {
                 repeat = true;
             }
        }

        if (!repeat)
        {
            printf("%d", i);
            break;
        }

    }

    return 0;
}
