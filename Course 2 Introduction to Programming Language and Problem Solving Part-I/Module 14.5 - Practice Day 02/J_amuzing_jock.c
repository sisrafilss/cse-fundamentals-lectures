#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main()
{
    char str1[101], str2[101], str3[102];

    scanf("%s", str1);
    scanf("%s", str2);
    scanf("%s", str3);

    char freq_arr1[26] = {0};
    for (int i = 0, n = strlen(str1); i < n; i++)
    {
        int index = str1[i] - 'A';
        freq_arr1[index]++;
    }
    for (int i = 0, n = strlen(str2); i < n; i++)
    {
        int index = str2[i] - 'A';
        freq_arr1[index]++;
    }

    char freq_arr2[26] = {0};
    for (int i = 0, n = strlen(str3); i < n; i++)
    {
        int index = str3[i] - 'A';
        freq_arr2[index]++;
    }



    bool possible = true;
    for (int i = 0; i < 26; i++)
    {
        if (freq_arr1[i] != freq_arr2[i])
        {
            possible = false;
        }
    }

    if (possible)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
