#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
//    v.front(50);
    v.insert(v.begin(), 50);

    for (auto x : v)
    {
        cout << x << endl;
    }

    return 0;
}
