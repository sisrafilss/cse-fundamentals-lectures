#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[27];
    cin.getline(str, 27);

    int len = strlen(str);
    int freq[26] = {0};

    for (int i = 0; i < len; i++)
    {
        int val = str[i] - 'a';
        freq[val]++;
    }

    bool different = false;
    for (int i = 0; i < 26; i++)
    {
       if (freq[i] > 1)
       {
           different = true;
           break;
       }
    }
    if (different)
    {
        cout << "no";
    }
    else
    {
        cout << "yes";
    }

    return 0;
}
