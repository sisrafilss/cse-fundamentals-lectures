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
    stack<char> st;
    stack<char> observe;
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
            st.push(infix[i]);
        }
        else if (infix[i] == '(')
        {
            while (!st.empty() && st.top() != ')')
            {

                result += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while (!st.empty() && precedenceCalc(st.top()) >= precedenceCalc(infix[i]))
            {
                result += st.top();
                st.pop();
            }
            st.push(infix[i]);
        }

//        observe = st;
//        cout << "Step " << i + 1 << ":    ";
//        while (!observe.empty())
//        {
//            cout << observe.top();
//            observe.pop();
//        }
//        cout << endl;
    }

    // Step 3
    while (!st.empty())
    {
        result += st.top();
        st.pop();
    }

    // Step 4
    reverse(result.begin(), result.end());

    return result;
}


// infix to Postfix
string infixToPostfix(string infix)
{
    // Step 1
    stack<char> st;
    stack<char> observe;
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
            st.push(infix[i]);
        }
        else if (infix[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                result += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while (!st.empty() && precedenceCalc(st.top()) >= precedenceCalc(infix[i]))
            {
                result += st.top();
                st.pop();
            }
            st.push(infix[i]);
        }
//        observe = st;
//        cout << "Step " << i + 1 << ":    ";
//        while (!observe.empty())
//        {
//            cout << observe.top();
//            observe.pop();
//        }
//        cout << endl;
    }

    // Step 2
    while (!st.empty())
    {
        result += st.top();
        st.pop();
    }

    return result;
}


 int prefixEvaluation(string chk)
 {
    stack<int> st;
    stack<int> observe;
    int len = chk.length();
    int step = 1;
    for (int i = len - 1; i >= 0; i--)
    {
        if (chk[i] >= '0' && chk[i] <= '9')
        {
            st.push(chk[i] - '0');
        }
        else
        {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();

            switch(chk[i])
            {
            case '+':
                st.push(a+b);
                break;
            case '-':
                st.push(a-b);
                break;
            case '*':
                st.push(a*b);
                break;
            case '/':
                st.push(a/b);
                break;
            case '^':
                st.push(pow(a, b));
                break;
            default:
                break;
            }
        }
        observe = st;
        cout << "Step " << step << ":    ";
        while (!observe.empty())
        {
            cout << observe.top();
            observe.pop();
        }
        cout << endl;
        step++;
    }
    return st.top();
 }



 int postfixEvaluation(string chk)
 {
    stack<int> st;
    int len = chk.length();

    // for observing the stack
    stack<int> observe;
    int step = 1;

    for (int i = 0; i < len; i++)
    {
        if (chk[i] >= '0' && chk[i] <= '9')
        {
            st.push(chk[i] - '0');
        }
        else
        {
            int b = st.top();
            st.pop();
            int a = st.top();
            st.pop();

            switch(chk[i])
            {
            case '+':
                st.push(a+b);
                break;
            case '-':
                st.push(a-b);
                break;
            case '*':
                st.push(a*b);
                break;
            case '/':
                st.push(a/b);
                break;
            case '^':
                st.push(pow(a, b));
                break;
            default:
                break;
            }
        }
        observe = st;
        cout << "Step " << step << ":    ";
        while (!observe.empty())
        {
            cout << observe.top();
            observe.pop();
        }
        cout << endl;
        step++;
    }
    return st.top();
 }


int main()
{
    string s;
//    int a, b;
    cin >> s;

//    string infix = "(+9*3/84)";
    string prefix = infixToPrefix(s);
    string postfix = infixToPostfix(s);
//
//    cout << "Infix: " << infix << endl;
    cout <<"Prefix: " << prefix << endl << endl;
    cout <<"Postfix: " << postfix << endl << endl;

    prefixEvaluation(prefix);
   postfixEvaluation(postfix);





    return 0;
}

// -+7*45+20

