#include<bits/stdc++.h>

using namespace std;

int sum = 0;
bool first = true;

void digitSum(int n)
{
    if (first)
    {
        sum += n % 10;
        first = false;
    }
    if (n <= 9)
    {
        return;
    }
    digitSum(n /= 10);

    sum += n % 10;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    int n;
    cin >> n;
    // cout << 
    digitSum(n);
    cout << sum << endl;
    // << endl; 

    return 0;
}