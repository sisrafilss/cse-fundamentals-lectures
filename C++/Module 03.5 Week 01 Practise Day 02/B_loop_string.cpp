#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[100001];
    cin.getline(str, 100001);

    int len = strlen(str);

    char odd_chars[100001];

    int j = 0;
    for (int i = 0; i < len; i += 2, j++)
    {
        odd_chars[j] = str[i];
    }
    odd_chars[j] = '\0';

    cout << odd_chars;

    return 0;
}
