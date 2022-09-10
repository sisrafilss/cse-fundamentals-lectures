#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "My name is Israfil Hossen";

    stringstream stream;
    stream << s;

    string w;
    while (stream >> w)
    {
        cout << w << endl;
    }

    return 0;
}
