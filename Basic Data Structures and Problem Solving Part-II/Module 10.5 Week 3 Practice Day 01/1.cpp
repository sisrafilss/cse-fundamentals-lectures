#include<bits/stdc++.h>
using namespace std;

int sum_of_arr(int arr[], int sz)
{
    int sum = 0;
    for (int i = 0; i < sz; i++)
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

    int sum = sum_of_arr(a, n);

    cout << "Sum = " << sum << endl;

    return 0;
}
