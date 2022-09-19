#include<bits/stdc++.h>
using namespace std;

string reverseString(string s)
{
    string revStr = "";
    int len = s.length();
    for (int i = len - 1; i >= 0; i--)
    {
        revStr += s[i];
    }
    return revStr;
}

int main()
{
    double x = 10.0;
    int y = 3;
    cout << x / (double)y << endl;



    return 0;
}
