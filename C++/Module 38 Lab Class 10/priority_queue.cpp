#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> H;

int main()
{
    priority_queue<H, vector<H>> PQ;
//    priority_queue<int, vector<int>, greater<int>> PQ;
    PQ.push(make_pair(5, 2));
    PQ.push(make_pair(9, 12));
    PQ.push(make_pair(7, 15));

    while (!PQ.empty())
    {
        cout << PQ.top().first << " " << PQ.top().second << endl;
        PQ.pop();
    }

    return 0;
}
