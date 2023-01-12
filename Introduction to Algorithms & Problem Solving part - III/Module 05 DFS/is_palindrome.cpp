#include<bits/stdc++.h>

using namespace std;

string cut_string(string s)
{
    string s2 = "";
    for (int i = 1; i < s.length() - 1; i++)
    {
        s2 += s[i];
    }
    return s2;
}

bool is_palindrome(string s)
{
    if (s.length() == 0 || s.length() == 1)
    {
        return true;
    }
    if (s[0] == s[s.length() - 1])
    {
        return is_palindrome(cut_string(s));
    }
    else
    {
        return false;
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        if (is_palindrome(s)) cout << "Yes" << endl;
        else cout << "NO" << endl;
    }

    

    return 0;
}