#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "abcdefghij";

    // Normal iterator - iterate from left to right
    // string:: iterator it;

    // Reverse iterator - iterate from right to left
    // string:: reverse_iterator it;

     // Iterate from left to right;
    for (string:: iterator it = str.begin(); it < str.end(); it++)
    {
        cout << *it << endl;
    }

    cout << endl;

    // Iterate from right to left;
    for (auto it = str.rbegin(); it < str.rend(); it++) // We can use string:: reverse_iterator it; instead of auto
    {
        cout << *it << endl;
    }


    return 0;
}
