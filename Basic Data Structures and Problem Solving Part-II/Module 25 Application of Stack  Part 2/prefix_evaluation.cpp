#include<bits/stdc++.h>
#include"MYSTACK.h"
using namespace std;

 int prefixEvaluation(string chk)
 {
    Stack<int> st;
    int len = chk.length();

    for (int i = len - 1; i >= 0; i--)
    {
        if (chk[i] >= '0' && chk[i] <= '9')
        {
            st.Push(chk[i] - '0');
        }
        else
        {
            int a = st.Pop();
            int b = st.Pop();

            switch(chk[i])
            {
            case '+':
                st.Push(a+b);
                break;
            case '-':
                st.Push(a-b);
                break;
            case '*':
                st.Push(a*b);
                break;
            case '/':
                st.Push(a/b);
                break;
            case '^':
                st.Push(pow(a, b));
                break;
            default:
                break;
            }
        }
    }
    return st.Top();
 }

int main()
{
    string s;
    int a, b;
    cin >> s;

    int result = prefixEvaluation(s);
    cout << "Result = " << result << endl;



    return 0;
}

// -+7*45+20

