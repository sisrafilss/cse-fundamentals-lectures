#include<bits/stdc++.h>
using namespace std;

int main()
{
    // assign() function assign string like assignment operator |
    string st = "xyz";
    st.assign("abcd");

    // push_back() function add a character at the end of the string
    st.push_back('A');


    // pop_back() function remove a character at from the end of the string
    st.pop_back();

    // insert(index, "string") function take two parameters - index and a string. Insert the string at the index position
    st.insert(2, "mnp");

    // erase(index, number_or_character) function take index and number of character to be deleted and delete the characters
    st.erase(2, 3);
    cout << st << endl;

    string st1 = "abcd";
    string st2 = "pqrs";

    // swap() function take two string and swap their value
    swap(st1, st2);
    cout << st1 << " " << st2 << endl;

    // Following two line will does the same
    st1 += st2;
    st1.append(st2);
    cout << st1 << endl;





    return 0;
}
