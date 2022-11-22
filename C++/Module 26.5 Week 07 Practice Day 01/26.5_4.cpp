#include<bits/stdc++.h>
#include"MYQUEUE.h"
using namespace std;

int main()
{
    Queue<int> inp;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        inp.push(x);
    }
    inp.Reverse();

    for (int i = 0; i < n; i++)
    {
        cout << inp.pop() << " ";
    }
    cout << endl;

    return 0;
}
