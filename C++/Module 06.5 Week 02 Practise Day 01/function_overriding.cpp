#include<bits/stdc++.h>
using namespace std;

class Parent
{
public:
    void fun()
    {
        cout << "Parent" << endl;
    }
};

class Child: public Parent
{
public:
    void fun()
    {
        cout << "Child" << endl;
    }
};

int main()
{
    Parent p;
    Child c;

    c.fun();
    p.fun();


    return 0;
}
