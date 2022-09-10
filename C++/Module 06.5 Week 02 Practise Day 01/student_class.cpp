#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    char section;
    int roll;

protected:
    int english_marks;

private:
    string password;

public:
    void set_marks(int marks)
    {
        english_marks = marks;
    }
    void set_password(string pass)
    {
        password = pass;
    }
    int get_marks()
    {
        return english_marks;
    }
    void update_marks(int marks, string pass)
    {
        if (pass == password)
        {
            english_marks = marks;
            cout << "Marks updated" << endl;
        }
        else
        {
            cout << "Opps! Incorrect password!" << endl;
        }
    }
};


int main()
{
    int n;
    cin >> n;
    Student arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Student " << i+1 << " Information -" << endl;
        cout << "Name: ";
        cin >> arr[i].name;

        cout << "Section: ";
        cin >> arr[i].section;

        cout << "Roll: ";
        cin >> arr[i].roll;

        cout << "English Marks: ";
        int marks;
        cin >> marks;
        arr[i].set_marks(marks);

        cout << "Password: ";
        string pass;
        cin >> pass;
        arr[i].set_password(pass);
        cout << endl;
    }

    int roll, marks;
    string password;
    cout << "Enter the following information to find the student" << endl;
    cout << "Roll: ";
    cin >> roll;

    cout << "Marks: ";
    cin >> marks;

    cout << "Password: ";
    cin >> password;

    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].roll == roll)
        {
            found = true;
            cout << "Updated Marks: ";
            int updated_marks;
            cin >> updated_marks;
            arr[i].update_marks(updated_marks, password);
        }
    }
    if (!found)
    {
        cout << "Opps! Student not found!" << endl;
        return -1;
    }

    cout << endl << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Student " << i+1 << " Information" << endl;
        cout << "Name: " << arr[i].name << endl;
        cout << "Section: " << arr[i].section << endl;
        cout << "Roll: " << arr[i].roll << endl;
        cout << "Marks: " << arr[i].get_marks() << endl;
        cout << endl;
    }


    return 0;
}
