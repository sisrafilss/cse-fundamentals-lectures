#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st = "abcdef";

    // Both of the following line will print the size of the string st
    cout << st.length() << endl;
    cout << st.size() << endl;

    // st string will resize and will be "abcd"
    st.resize(4);
    cout << st << endl;
    cout << st.size() << endl; // will print 4

    // clear() function will clear the string
    st.clear();
    cout << st << " " << st.size() << endl;

    if (st.empty())  // empty() return true of string is empty false otherwise
    {
        cout << "String is cleared" << endl;
    }
    else
    {
        cout << "String is: " << st << endl;
    }

    return 0;
}
