#include<bits/stdc++.h>
using namespace std;

void take_input(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }
}

void PrintArray(int sz, int arr[])
{
    // Traverse array
    for (int i = 0; i < sz ; i++)
    {
        cout << arr[i] << " ";
    }
}

void replace_three(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        if (arr[i] % 3 == 0)
        {
            arr[i] = -1;
        }
    }
}

int main()
{
    int length;
    cin >> length;
    int arr[length];

    take_input(arr, length);

    replace_three(arr, length);

    PrintArray(length, arr);

    return 0;
}
