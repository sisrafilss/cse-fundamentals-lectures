#include<bits/stdc++.h>
using namespace std;

int sum_of_even_indexes(int arr[], int sz)
{
    int sum = 0;
    for (int i = 0; i < sz; i += 2)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int sum = sum_of_even_indexes(a, n);

    cout << sum << endl;

    return 0;
}
