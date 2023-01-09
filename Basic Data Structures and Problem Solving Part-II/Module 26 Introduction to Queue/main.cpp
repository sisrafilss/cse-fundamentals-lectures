#include<bits/stdc++.h>
#include"MYQUEUE.h"
using namespace std;

int main()
{
    Queue<float> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        float x;
        cin >> x;
        q.push(x);
    }


    cout << "Pop = " << q.pop() << endl;
    cout << "Back = " << q.Back() << endl;
    cout << "Front = " << q.Front() << endl;


    while (!q.empty())
    {
        cout << q.pop() << " ";
    }
    cout << endl;

    return 0;
}
