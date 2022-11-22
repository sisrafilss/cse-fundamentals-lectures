#include<bits/stdc++.h>
#include"MYSTACK.h";

using namespace std;

int globalId = 100;

class Person
{
    string name;
    int id;
    float salary;

public:
    Person()
    {
        name = "";
        id = -1;
        salary = -1;
    }
    void setName(string name)
    {
        this->name = name;
    }
    void setSalary(float salary)
    {
        this->salary = salary;
    }
    Person(string name, float salary)
    {
        setName(name);
        setSalary(salary);
        this->id = globalId;
        globalId++;
    }
    string getName()
    {
        return this->name;
    }
    float getSalary()
    {
        return this->salary;
    }
    int getId()
    {
        return this->id;
    }
    void print()
    {
        cout << this->name << " | " << this->id << " | " << this->salary << endl;
    }
};

int main()
{
    Stack<Person> st;
    Person a ("Israfil Hossen", 234.22);
    Person b ("Alamin Rahman", 234.22);
    Person c ("Jahangir Kabir", 234.22);

    st.Push(a);
    st.Push(b);
    st.Push(c);

    while (!st.Empty())
    {
        Person print;
        print = st.Pop();
        print.print();
    }

    return 0;
}
