#include<bits/stdc++.h>
using namespace std;

class Parent
{
public:
    int x;

private:
    int y;

protected:
    int z;

public:
    Parent(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
};

// Inherited class
class Child: public Parent
{
public:
    int xx;

public:
    Child(int a, int b, int c, int yy) : Parent(a, b, c)
    {
        xx = yy;
    }
    int tellMe()
    {
        return z;
    }
};

int main()
{
    Parent pt(10, 20, 30);
    Child ch(10, 20, 30, 100);
    cout << ch.tellMe() << endl;

    return 0;
}
