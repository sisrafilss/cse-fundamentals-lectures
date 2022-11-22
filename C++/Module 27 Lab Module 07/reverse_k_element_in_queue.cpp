#include<bits/stdc++.h>
#include"MYSTACK.h"
#include"MYQUEUE.h"
using namespace std;

/*
Test Case
Input:
7 4
1 2 3 4 5 6 7

Output:
4 3 2 1 7 6 5
*/

void reverseKElements(int n, int k, Queue<int> &q)
{
    int x = n / k;
    int y = n % k;

    Stack<int> st;
    while (x > 0)
    {
        int chk = k;
        while (chk > 0)
        {
            st.Push(q.pop());
            chk--;
        }
        while (!st.Empty())
        {
            q.push(st.Pop());
        }
        x--;
    }

    while (y > 0)
    {
        st.Push(q.pop());
        y--;
    }
    while (!st.Empty())
    {
        q.push(st.Pop());
    }
}

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Queue<int> q;
    for (int i = 0; i < n; i++)
    {
        q.push(arr[i]);
    }

    reverseKElements(n, k, q);

    while (!q.empty())
    {
        cout << q.pop() << " ";
    }
    cout << endl;


    return 0;
}
