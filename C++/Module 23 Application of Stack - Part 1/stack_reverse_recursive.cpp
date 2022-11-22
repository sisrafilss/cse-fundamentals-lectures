#include<bits/stdc++.h>
#include"MYSTACK.h"
using namespace std;


void insertAtBottom(Stack<int> &chk, int chkElement)
{
    if (chk.Empty())
    {
        chk.Push(chkElement);
        return;
    }
    int topElement = chk.Top();
    chk.Pop();
    insertAtBottom(chk, chkElement);

    chk.Push(topElement);
}

void reverseStack(Stack<int> &chk)
{
    if (chk.Empty())
    {
        return;
    }
    int topElement = chk.Top();
    chk.Pop();
    reverseStack(chk);
    insertAtBottom(chk, topElement);
}


int main()
{
    Stack<int> st;
    st.Push(1);
    st.Push(2);
    st.Push(3);
    st.Push(4);
    st.Push(5);

    reverseStack(st);

    while (!st.Empty())
    {
        cout << st.Top() << endl;
        st.Pop();
    }

    return 0;
}
