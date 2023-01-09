#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int lb, int ub, int searchVal)
{
    int mid = (lb + ub) / 2;
    if (arr[mid] == searchVal)
    {
        return mid;
    }
    else if (searchVal < arr[mid])
    {
        binarySearch(arr, lb, mid - 1, searchVal);
    }
    else if (searchVal > arr[mid])
    {
        binarySearch(arr, mid + 1, ub, searchVal);
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

    int index = binarySearch(arr, 0, n-1, k);

    cout << index+1 << endl;

    return 0;
}
