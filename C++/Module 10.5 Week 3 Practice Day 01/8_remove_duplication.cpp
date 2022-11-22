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
    if (sz == 2 && arr[0] == arr[1])
    {

        cout << arr[0] << endl;
        return;

    }

    // Traverse array
    for (int i = 0; i < sz ; i++)
    {
        cout << arr[i] << " ";
    }
}

void delete_element(int arr[], int length, int idx)
{
    for (int i = idx; i < length - 1; i++)
    {
        arr[i] = arr[i+1];
    }
}

void remove_duplication(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = i+1; j < length; j++)
        {
            if (arr[i] == arr[j])
            {
                delete_element(arr, length, j);
                length--;
            }
        }
    }

    PrintArray(length, arr);
}

int main()
{
    int length;
    cin >> length;
    int arr[length];

    take_input(arr, length);

    remove_duplication(arr, length);

    return 0;
}
