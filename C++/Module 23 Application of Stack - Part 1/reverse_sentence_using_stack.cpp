#include<bits/stdc++.h>
#include"MYSTACK.h"
using namespace std;

void reverseSentense(string s)
{
    Stack<string> st;

    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        string word = "";
        while (i < len && s[i] !=  ' ')
        {
            word += s[i];
            i++;
        }
        st.Push(word);
    }

    while (!st.Empty())
    {
        cout << st.Top() << " ";
        st.Pop();
    }
    cout << endl;
}

int main()
{
    string s = "Bangladesh is a very beautiful country";

    reverseSentense(s);

    return 0;
}
