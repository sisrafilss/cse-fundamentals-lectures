#include<bits/stdc++.h>
using namespace std;

// selection sort
void sort(int n, int arr[])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(n, arr);

    int big_toy = 0;
    for (int i = 0; i < k; i++)
    {
        big_toy += arr[i];
    }

    cout << big_toy;

    return 0;
}
