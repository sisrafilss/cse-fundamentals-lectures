#include<bits/stdc++.h>

using namespace std;

void reverse(string s)
{
    if (s.size() == 0)
    {
        return;
    }
    reverse(s.substr(1, s.size() - 1));
    cout << s[0];
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    string s = "phitron";

    reverse(s);

    // cout << s << endl;

    return 0;
}