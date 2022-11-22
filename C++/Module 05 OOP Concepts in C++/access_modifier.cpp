#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    int x;

private:
    int y;

protected:
    int z;
};

int main()
{
    Student mamun;
    mamun.x = 10;

// main() can't access private and protected data
//    mamun.y = 5;
//    mamun.z = 55;

    return 0;
}
