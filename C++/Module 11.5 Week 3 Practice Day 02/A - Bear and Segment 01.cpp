#include<bits/stdc++.h>
using namespace std;

int first_one_idx(string s, int length)
{
    int idx = -1;
    for (int i = 0; i < length; i++)
    {
        if (s[i] == '1')
        {
            idx = i;
            break;
        }
    }
    return idx;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        int length = s.length();
        int one_idx = first_one_idx(s, length);

        if (one_idx == -1)
        {
            cout << "NO" << endl;
            continue;
        }
        int idx = one_idx;

        while (s[idx] != '0' && idx < length)
        {
            idx++;
        }
        bool duplicate = false;
        for (int j = idx; j < length; j++)
        {
            if (s[j] == '1')
            {
                duplicate = true;
                break;
            }
        }
        if (!duplicate)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

    }

    return 0;
}
