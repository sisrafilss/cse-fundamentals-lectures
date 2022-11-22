#include<bits/stdc++.h>
using namespace std;

class Example
{
public:
    int add(int a, int b)
    {
        cout << "First One: ";
        return a + b;
    }
    double add(double a, double b)
    {
        cout << "Second One: ";
        return a + b;
    }
    void add(char a)
    {
        cout << "Hello " << a << endl;
    }
};

int main()
{
    Example ex;
    cout << ex.add(5, 10) << endl;
    cout << ex.add(5.1, 10.2) << endl;
    ex.add('z');


    return 0;
}
