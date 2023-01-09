#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[200001];
    cin >> s;

    int len = strlen(s);
    int start_idx = 0, end_idx = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'A' && !start_idx)
        {
            start_idx = i;
        }
        if (s[i] == 'Z')
        {
            end_idx = i;
        }
    }

    cout << (end_idx - start_idx) + 1;

    return 0;
}
