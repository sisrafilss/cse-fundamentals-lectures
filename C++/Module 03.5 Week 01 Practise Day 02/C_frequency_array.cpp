#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[100001];
    cin.getline(str, 100001);

    int freq[26] = {0};
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        int val = str[i] - 'a';
        freq[val]++;
    }


    for (int i = 0; i < 26; i++)
    {
        if (freq[i] == 0)
        {
            printf("%c", (i + 'a'));
            return 0;
        }
    }

    cout << "None";

    return 0;
}
