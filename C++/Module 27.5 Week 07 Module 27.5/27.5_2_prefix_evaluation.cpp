#include<bits/stdc++.h>
#include"MYSTACK.h"
using namespace std;

int prefixEvaluation(string prefix)
{
    Stack<int> st;
    int len = prefix.length();
    for (int i = len - 1; i >= 0; i--)
    {
        char chk = prefix[i];
        if (chk >= '0' && chk <= '9')
        {
            st.Push(chk - '0');
        }
        else
        {
            int a = st.Pop();
            int b = st.Pop();
            switch(chk)
            {
            case '+':
                st.Push(a + b);
                break;
            case '-':
                st.Push(a - b);
                break;
            case '*':
                st.Push(a * b);
                break;
            case '/':
                st.Push(a / b);
                break;
            case '^':
                st.Push(pow(a, b));
                break;
            default:
                break;
            }
        }

    }
    return st.Pop();
}

int main()
{
    string prefix;
    cin >> prefix;
    int result = prefixEvaluation(prefix);

    cout << result << endl;

    return 0;
}
