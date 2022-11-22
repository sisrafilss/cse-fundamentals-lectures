#include<bits/stdc++.h>
#include"MYSTACK.h"
using namespace std;

int main()
{
    Stack<int> inp;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        inp.Push(x);
    }

    Stack<int> tempStack;
    while (!inp.Empty())
    {
        int temp = inp.Pop();
        while (!tempStack.Empty() && tempStack.Top() < temp)
        {
            inp.Push(tempStack.Pop());

        }
        tempStack.Push(temp);
    }

    cout << endl;
    while (!tempStack.Empty())
    {
        cout << tempStack.Pop() << " ";
    }
    cout << endl;

    return 0;
}
