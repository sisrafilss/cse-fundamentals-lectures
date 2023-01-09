#include<bits/stdc++.h>
#include"MYSTACK.h"
using namespace std;

bool balancedBracket(string s)
{
    bool chk = true;
    if (s[0] == ')' || s[0] == '}' || s[0] == ']')
    {
        return false;
    }

    Stack<char> st;
    int len = s.length();
    for (int i = 0; i < len; i++)
    {

        if (s[i] == '(' || s[i] ==  '{' || s[i] == '[')
        {
            st.Push(s[i]);
        }
        else
        {
            if (s[i] == ')' && st.Top() == '(')
            {
                st.Pop();
            }
            else if (s[i] == '}' && st.Top() == '{')
            {
                st.Pop();
            }
            else if (s[i] == ']' && st.Top() == '[')
            {
                st.Pop();
            }
            else
            {
                chk = false;
                break;
            }
        }

    }

    if (!st.Empty())
    {
        chk = false;
    }
    return chk;
}

int main()
{
    string st;
    cin >> st;

    if (balancedBracket(st))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
