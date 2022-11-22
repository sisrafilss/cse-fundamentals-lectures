#include<bits/stdc++.h>
using namespace std;

stack<int> pushToStack(int arr[], int n)
{
    stack<int> st;
   for (int i = 0; i < n; i++)
   {
       st.push(arr[i]);
   }
   return st;
}

int getMinAtPop(stack<int> st)
{
    int mn = st.top();
    while(!st.empty())
    {
        int top = st.top();
        if (top < mn)
        {
            mn = top;
        }
        st.pop();
    }
    return mn;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    stack<int> st;
    st = pushToStack(arr, n);

    while (!st.empty())
    {
        int mn = getMinAtPop(st);
        cout << mn << " ";
        st.pop();
    }
    cout << endl;


    return 0;
}
