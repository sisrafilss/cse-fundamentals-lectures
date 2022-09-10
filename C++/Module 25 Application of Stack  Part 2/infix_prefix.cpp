#include<bits/stdc++.h>
#include"MYSTACK.h"
using namespace std;


int precedenceCalc(char c)
{
    if (c == '^')
    {
        return 3;
    }
    else if (c == '/' || c == '*')
    {
        return 2;
    }
    else if (c == '+' || c == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}


string infixToPrefix(string infix)
{
    // Step 1
    reverse(infix.begin(), infix.end());

    // Step 2
    Stack<char> st;
    string result;
    int len = infix.length();
    for (int i = 0; i < len; i++)
    {
        if (infix[i] >= '0' && infix[i] <= '9')
        {
            result += infix[i];
        }
        else if (infix[i] == ')')
        {
            st.Push(infix[i]);
        }
        else if (infix[i] == '(')
        {
            while (!st.Empty() && st.Top() != ')')
            {
                result += st.Pop();
            }
            st.Pop();
        }
        else
        {
            while (!st.Empty() && precedenceCalc(st.Top()) >= precedenceCalc(infix[i]))
            {
                result += st.Pop();
            }
            st.Push(infix[i]);
        }
    }

    // Step 3
    while (!st.Empty())
    {
        result += st.Pop();
    }

    // Step 4
    reverse(result.begin(), result.end());

    return result;
}


// infix to Postfix
string infixToPostfix(string infix)
{
    // Step 1
    Stack<char> st;
    string result;
    int len = infix.length();
    for (int i = 0; i < len; i++)
    {
        if (infix[i] >= '0' && infix[i] <= '9')
        {
            result += infix[i];
        }
        else if (infix[i] == '(')
        {
            st.Push(infix[i]);
        }
        else if (infix[i] == ')')
        {
            while (!st.Empty() && st.Top() != '(')
            {
                result += st.Pop();
            }
            st.Pop();
        }
        else
        {
            while (!st.Empty() && precedenceCalc(st.Top()) >= precedenceCalc(infix[i]))
            {
                result += st.Pop();
            }
            st.Push(infix[i]);
        }
    }

    // Step 2
    while (!st.Empty())
    {
        result += st.Pop();
    }

    return result;
}

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

 int postfixEvaluation(string chk)
 {
    Stack<int> st;
    int len = chk.length();

    for (int i = 0; i < len; i++)
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
//    string s;
//    int a, b;
//    cin >> s;

//    string infix = "(+9*3/84)";
//    string prefix = infixToPrefix(infix);
//    string postfix = infixToPostfix(infix);
//
//    cout << "Infix: " << infix << endl;
//    cout <<"Prefix: " << prefix << endl;
//    cout <<"Postfix: " << postfix << endl;
    cout << "Result: " << prefixEvaluation("(+9*3/84)") << endl;



    return 0;
}

// -+7*45+20

