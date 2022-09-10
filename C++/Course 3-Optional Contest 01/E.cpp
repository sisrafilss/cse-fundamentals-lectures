#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x = 0, n;
    char s[101];
    cin >> n >> s;

    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'I')
        {
            x++;
        }
        else if (s[i] == 'D')
        {
            x--;
        }
        if (x > mx)
        {
            mx = x;
        }
    }

    cout << mx;


    return 0;
}
