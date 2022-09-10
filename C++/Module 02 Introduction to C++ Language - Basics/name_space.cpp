#include<bits/stdc++.h>
using namespace std;

namespace one
{
    double pi = 3.1416;
    void fun()
    {
        cout<<"I am namespace One"<<endl;
    }
}
namespace two
{
    void fun2()
    {
        cout<<"I am namespace Two"<<endl;
    }
}

using namespace one;


int main()
{
    fun();
    two::fun2();

    return 0;
}
