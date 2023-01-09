#include<bits/stdc++.h>
#include"MYSTACK.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Stack<int> st;
    Stack<int> minStack;
    int mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= mn)
        {
            mn = arr[i];
            minStack.Push(mn);
        }
        st.Push(arr[i]);
    }

    while (!st.Empty())
    {
        if (st.Top() != minStack.Top())
        {
            cout << minStack.Top() << " ";
            st.Pop();
        }
        else
        {
            cout << minStack.Top() << " ";
            minStack.Pop();
            st.Pop();
        }
    }
    cout << endl;

    return 0;
}
