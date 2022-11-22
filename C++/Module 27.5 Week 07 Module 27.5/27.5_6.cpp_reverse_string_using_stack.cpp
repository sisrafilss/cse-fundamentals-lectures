#include<bits/stdc++.h>
using namespace std;

/*
Write a program to reverse a string using stack.

Input: abcdef
Output: fedcba

Input: wow
Output: wow
*/

void print_reverse(string s)
{
    stack<char> st;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        st.push(s[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << st.top();
        st.pop();
    }
    cout << endl;
}

int main()
{
    string s;
    cin >> s;
    print_reverse(s);

    return 0;
}
