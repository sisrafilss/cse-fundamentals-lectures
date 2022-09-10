#include<bits/stdc++.h>
using namespace std;

class Student
{
public: // Access modifier / specifier
    char name[100];
    int roll;
};

int main()
{
    Student mamun;
    strcpy(mamun.name, "Abdullah AL Mamun");
    mamun.roll = 17;

    cout << "Name: " << mamun.name << endl << "Roll: " << mamun.roll << endl;

    return 0;
}
