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

// Binary Search
int binary_src(int lb, int ub, int x, int arr[])
{
    if (lb <= ub)
    {
        int mid = (lb + ub) / 2;
        if (arr[mid] == x)   return mid;
        else if (x > arr[mid])  binary_src(mid+1, ub, x, arr);
        else if (x < arr[mid])  binary_src(lb, mid-1, x, arr);
    }
    else
    {
        return -1;
    }
}

int main()
{
    int sz;
    cin >> sz;
    int a[sz];
    for (int i = 0; i < sz; i++)
    {
        cin >> a[i];
    }

    PrintArray(sz, a);
    cout << endl;

    int check_val;
    cout << "Enter the value you want to search: ";
    cin >> check_val;

    int idx = binary_src(0, sz-1, check_val, a);

    if (idx != -1)
    {
        cout << "Found at Index: " << idx << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }


    return 0;
}











