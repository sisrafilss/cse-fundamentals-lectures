#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;
    int a[size];

    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    char c;
    cout << "Do you want to search: (Y/N) ";
    cin >> c;
    while (toupper(c) == 'Y')
    {
        int check_value;
        cout << "Enter the value you want to search: ";
        cin >> check_value;
        int found = 0;
        // Linear Search
        for (int i = 0; i < size; i++)
        {
            if (a[i] == check_value)
            {
                cout << "Index No: " << i << " Position: " << i+1 << endl;
                found = 1;
            }
        }

        if (found == 0)
        {
            cout << "Not Found" << endl;
        }
        cout << "Do you want to continue Searching: (Y/N) ";
        cin >> c;
    }



    return 0;
}
