#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[101];
    cin.getline(str, 101);

    int len = strlen(str);

    cout << str[0] << len - 2 << str[len - 1];

    return 0;
}
