#include<bits/stdc++.h>

using namespace std;

void getCapital(string str)
{
    if (isupper(str[0]))
    {
        cout << str[0] << endl;
        return;
    }
    getCapital(str.substr(1, str.size() - 1));
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    string s = "thisStRIng";
    getCapital(s);


    return 0;
}