#include<bits/stdc++.h>
using namespace std;

/*
Write a program to check if the given string is a palindrome or
not a palindrome using stack .

Input: wow
Output: YES

Input: abcdef
Output: NO

Input: abcdcba
Output: YES
*/

bool palindromCheck(string s)
{
    stack<char> st;
    bool is_palindrom = true;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        st.push(s[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] != st.top())
        {
            is_palindrom = false;
        }
        st.pop();
    }

    return is_palindrom;
}

int main()
{
    string s;
    cin >> s;
    if (palindromCheck(s))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }


    return 0;
}
