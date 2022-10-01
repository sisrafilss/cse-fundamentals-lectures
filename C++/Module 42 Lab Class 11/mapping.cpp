#include<bits/stdc++.h>
using namespace std;

int main()
{
//    map<int, int> m;
    unordered_map<int, int> m;
    m[1] = 5;
    m[5] = 11;
    m[2] = 25;
    m.insert(make_pair(3, 10));
    m.insert({6, 12});

    cout << "key" << " | " << "value" << endl;
    for (auto i: m)
    {
        cout << i.first << " | " << i.second << endl;
    }

    return 0;
}
