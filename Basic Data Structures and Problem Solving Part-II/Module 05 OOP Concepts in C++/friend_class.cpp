#include<bits/stdc++.h>
using namespace std;

class Parent
{
private:
    int password;

protected:
    int taka;

public:
    Parent(int tk, int pass)
    {
        password = pass;
        taka = tk;
    }
//    friend class Friend;
    friend void friend_func(Parent *ptr);
};


/*
// Friend Class
class Friend
{
public:
    void tellSecret(Parent *ptr)
    {
        cout << "Taka = " << ptr -> taka << endl;
        cout << "Password = " << ptr -> password << endl;
    }

};
*/

// Friend Function
void friend_func(Parent *ptr)
{
    cout << "Taka = " << ptr -> taka << endl;
    cout << "Password = " << ptr -> password << endl;
}

int main()
{
    Parent pt(2000, 2345);

    // Access private data using friend class
//    Friend fr;
//    fr.tellSecret(&pt);

    // Access private data using friend function
    friend_func(&pt);

    return 0;
}
