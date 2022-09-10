#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st = "aaaabbbbbccczzx";

    // find() and find_first_of() function take a character or substring and return the index of first match from the left. If the character or substring does not found, it return a huge number which is greater that the size of that string
    cout << st.find('z') << endl;
    cout << st.find_first_of('z') << endl;

    // rfind() and find_last_of() function take a character or substring and return the index of first match from the last (right). If the character or substring does not found, it return a huge number which is greater that the size of that string
    cout << st.rfind('z') << endl;
    cout << st.find_last_of('z') << endl;

    // find_firs_not_of('a') return the first index where 'a' not found
    cout << st.find_first_not_of('a') << endl;

    // find_last_not_of('a') return the first index where 'a' not found from the right (end).
    cout << st.find_last_not_of('a') << endl;

    // substr(index, number_of_character) function take index and number of character and return the substring
    cout << st.substr(2, 3) << endl;



    return 0;
}
