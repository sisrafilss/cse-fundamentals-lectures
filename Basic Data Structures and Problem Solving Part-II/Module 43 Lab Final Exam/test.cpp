#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int> > pq;
    pq.push(4);
    pq.push(1);
    pq.push(9);

    while (!pq.empty())
    {
        cout << pq.top() << endl;
        pq.pop();
    }

    return 0;
}
