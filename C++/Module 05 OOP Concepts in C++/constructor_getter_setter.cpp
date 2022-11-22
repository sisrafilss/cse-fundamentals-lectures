#include<bits/stdc++.h>
using namespace std;

class Example
{
private:
    int x;
    int pass;

public:
    Example(int p)
    {
        pass = p;
    }
    void setter(int a, int p)
    {
        if (p == pass)
        {
            x = a;
        }
        else
        {
            cout << "Password didn't match" << endl;
        }
    }
    int getter(int p)
    {
        if (p == pass)
        {
            return x;
        }
        else
        {
           cout << "Password didn't match" << endl;
           return -1;
        }

    }
};

int main()
{
    Example a(1234);

    a.setter(55, 1234);
    cout << a.getter(1234) << endl;

    return 0;
}
