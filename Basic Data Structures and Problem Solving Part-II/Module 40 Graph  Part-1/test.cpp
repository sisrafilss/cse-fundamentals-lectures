#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> edgeWeightPair;

list<edgeWeightPair> g;

int main()
{
    g.push_back(make_pair(1, 7));
    g.push_back(make_pair(1, 7));
    g.push_back(make_pair(1, 7));

    for (auto i = g.begin(); i != g.end(); i++)
    {
        cout << (*i).first << " " << (*i).second << endl;
    }


    return 0;
}
