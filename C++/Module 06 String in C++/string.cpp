#include<bits/stdc++.h>
using namespace std;

int main()
{
    // string declaration
    string str1; // it use dynamic memory allocation.
    str1 = "Hello World!";
    cout << str1 << endl;

    string st(10, 'a'); // st will be "aaaaaaaaaa" (10 a)
    cout << st << endl;

    // String concatination
    string st1 = "abcde";
    string st2 = "fghij";
    string n = st1 + st2;
    cout << n << endl;

    // Copy st2 into st1
    st1 = st2;
    cout << st1 << endl;

    // Compare two string
    string st3 = "abcd";
    string st4 = "abcd";
    if (st3 == st4)
    {
        cout << "Same" << endl;
    }
    else
    {
        cout << "Different" << endl;
    }


    cout << str1.capacity() << endl; // will print the current capacity of the string str1
    cout << str1.max_size() << endl; // will print the maximum capacity of the string str1

    return 0;
}
