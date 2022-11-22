#include<bits/stdc++.h>
using namespace std;

/*
Detect duplicate parenthesis in a equation.
Input: (((a+b))+((c+d)))
Output: YES

Input: (a+b)+(c+d)
Output: NO
*/

bool duplicate(string s)
{
    bool is_duplicate = false;
    stack<char> st;
    int n = s.length(), cnt = 0, popped = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            st.push(s[i]);
            popped = 0;
        }
        else if (s[i] == ')')
        {
            if (popped == 0)
            {
                st.pop();
                popped++;
            }
            else
            {
                is_duplicate = true;
                break;
            }
        }

    }
    return is_duplicate;
}

int main()
{
    string s;
    cin >> s;
    if (duplicate(s))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
