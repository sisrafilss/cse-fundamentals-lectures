#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main()
{
    int nums;
    scanf("%d", &nums);

    for (int y = 0; y < nums; y++)
    {
        int n;
        scanf("%d", &n);

        char word[n];
        scanf("%s", word);

        int char_array[26] = {0};
        for (int j = 0, k = strlen(word); j < k; j++)
            {
                if (word[j] != word[j + 1])
                {
                    int index = word[j] - 'A';
                    char_array[index]++;
                }
            }

            bool suspicious = false;
           for (int m = 0; m < 26; m++)
           {
               if (char_array[m] > 1)
               {
                   printf("NO\n");
                   suspicious = true;
                   break;
               }
           }
            if (!suspicious)
            {
                printf("YES\n");
            }
    }

}

