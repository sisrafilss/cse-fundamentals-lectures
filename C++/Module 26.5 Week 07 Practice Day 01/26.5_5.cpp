#include<bits/stdc++.h>
using namespace std;

string decimalToBinary(int x)
{
    string binary = "";
    while (x > 0)
    {
      int remainder = x % 2;
      x = x / 2;
      binary += (remainder + '0');
    }
    reverse(binary.begin(), binary.end());
    return binary;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        string binary = decimalToBinary(i);
        cout << binary << " ";
    }
    cout << endl;

    return 0;
}
