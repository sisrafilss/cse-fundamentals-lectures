#include<bits/stdc++.h>

using namespace std;

bool is_palindrome(string s)
{
    if (s.length() == 0 || s.length() == 1)
    {
        return true;
    }
    int n = s.size();
    string small_str = s.substr(1, n - 2);
    return is_palindrome(small_str) && (s[0] == s.back());
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