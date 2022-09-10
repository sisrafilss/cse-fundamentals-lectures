#include<bits/stdc++.h>
using namespace std;

void print_vector(vector<int> v)
{
    for (int i  = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v;
    v.push_back(100);
    v.push_back(200);
    v.push_back(300);
    v.push_back(300);
    v.push_back(300);

    cout << v.size() << endl;
    cout << v.capacity() << endl;
    cout << v.max_size() << endl;

    vector<int>:: iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

//    print_vector(v);

    return 0;
}
