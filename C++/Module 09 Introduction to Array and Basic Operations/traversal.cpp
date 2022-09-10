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

int main()
{
    int a[50];
    int sz;
    cin >> sz;

    for (int i = 0; i < sz; i++)
    {
        cin >> a[i];
    }

    cout << "Given Array: ";
    PrintArray(sz, a);
    cout << endl;

    int pos, value;
    cout << "Insertion position: ";
    cin >> pos;

    cout << "Insertion value: ";
    cin >> value;

    if (pos < 0 || pos > sz)
    {
        cout << "Invalid Position" << endl;
    }
    else
    {
        // For sorted array
//        for (int i = sz; i > pos; i--)
//        {
//            a[i] = a[i - 1];
//        }
//        a[pos] = value;


        // for unsorted array
        a[sz] = a[pos];
        a[pos] = value;
        sz++;
    }

    cout << "After insertion: ";
    PrintArray(sz, a);
    cout << endl;

    int delete_index;
    cout << "Enter index to delete :";
    cin >> delete_index;

    if (delete_index < 0 || delete_index >= sz)
    {
        cout << "Invalid Index" << endl;
    }
    else
    {
        if (delete_index == (sz - 1))
        {
            sz--;
        }
        else
        {
            for (int i = delete_index; i < sz - 1; i++)
            {
                a[i] = a[i + 1];
            }
            sz--;
        }
    }

    cout << "After Deletion: ";
    PrintArray(sz, a);

    return 0;
}
