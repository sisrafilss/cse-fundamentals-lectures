#include<bits/stdc++.h>
using namespace std;

void PrintArray(int sz, int arr[])
{
    // Traverse array
    for (int i = 0; i < sz ; i++)
    {
        cout << arr[i] << " ";
    }
}

void reverse_array(int arr[], int sz)
{
    for (int i = 0, j = sz - 1; i < j; i++, j--)
    {
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
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

    reverse_array(a, n);

    PrintArray(n, a);

    return 0;
}
