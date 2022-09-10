#include<bits/stdc++.h>
using namespace std;

class BankAccount
{
public:
    string account_holder;
    string address;
    int age;
    int account_number;

protected:
    int balance;

private:
    string password;

public:
    BankAccount(string account_holder, string address, int age, string password)
    {
        this->account_holder = account_holder;
        this->address = address;
        this->age = age;
        this->password = password;
        this->balance = 0;
        this->account_number = rand() % 1000;
        cout << "Your bank account number is " << this->account_number << endl;
    }
    int show_balance(string password)
    {
        if (this->password == password)
        {
            return this->balance;
        }
        else
        {
            return -1;
        }
    }
    void deposit(string password, int amount)
    {
        if (amount <= 0)
        {
            cout << "Invalid Amount" <<endl;
            return;
        }
        if (this->password == password)
        {
            this->balance += amount;
            cout << "Deposited successfully" << endl;
        }
        else
        {
            cout << "Wrong password" << endl;
        }
    }

    void withdraw(string password, int amount)
    {
        if (amount <= 0)
        {
            cout << "Invalid Amount" <<endl;
            return;
        }
        if (amount > this->balance)
        {
            cout << "Insufficient Balance" << endl;
            return;
        }
        if (this->password == password)
        {
            this->balance -= amount;
            cout << "Withdraw successfully" << endl;
        }
        else
        {
            cout << "Wrong password" << endl;
        }
    }
    friend class MyCash;
};

class MyCash
{
protected:
    int balance;

public:
    MyCash()
    {
        this->balance = 0;
    }
    int show_balance(BankAccount *myAccount, string password)
    {
        if (myAccount->password == password)
        {
            return this->balance;
        }
        else
        {
            return -1;
        }
    }
    void add_money_to_myCash(BankAccount *myAccount, string password, int amount)
    {
        if (amount <= 0)
        {
            cout << "Invalid Amount" <<endl;
            return;
        }

        if (myAccount->password == password)
        {
            this->balance += amount;
            myAccount->balance -= amount;
            cout << "MyCash balance updated" << endl;
        }
        else
        {
            cout << "Wrong Password!" << endl;
        }
    }
};


BankAccount* create_account()
{
    string name, address, password;
    int age;
    cout << "CREATE ACCOUNT" << endl;
    cin >> name >> address >> age >> password;

    BankAccount *myAccount = new BankAccount(name, address, age, password);

    cout << "Your bank balance is " << myAccount->show_balance("abc") << endl;
    cout << endl;
    return myAccount;
}

void deposit(BankAccount *myAccount)
{
    string password;
    int amount;
    cout << "DEPOSIT" << endl;
    cin >> password >> amount;
    myAccount->deposit(password, amount);
    cout << "Your bank balance is " << myAccount->show_balance("abc") << endl;
    cout << endl;
}

void withdraw(BankAccount *myAccount)
{
    string password;
    int amount;
    cout << "WITHDRAW" << endl;
    cin >> password >> amount;
    myAccount->withdraw(password, amount);
    cout << "Your bank balance is " << myAccount->show_balance("abc") << endl;
    cout << endl;
}

void add_money_to_myCash(BankAccount *myAccount, MyCash *myCash)
{
    string password;
    int amount;
    cout << "Add Money to MyCash" << endl;
    cin >> password >> amount;
    myCash->add_money_to_myCash(myAccount, password, amount);

    cout << "Your MyCash balance is " << myCash->show_balance(myAccount, "abc") << endl;
    cout << "Your bank balance is " << myAccount->show_balance("abc") << endl;
    cout << endl;

}

int main()
{
    BankAccount *myAccount = create_account();
    MyCash *myCash = new MyCash();

    Flag:
        cout << "Enter 1 to Deposit" << endl;
    cout << "Enter 2 to Withdraw" << endl;
    cout << "Enter 3 to add money to MyCash" << endl;
    int option;
    cin >> option;
    if (option == 1)
    {
        deposit(myAccount);
    }
    else if (option == 2)
    {
       withdraw(myAccount);
    }
    else if (option == 3)
    {
        add_money_to_myCash(myAccount, myCash);
    }
    else
    {
        cout << "Invalid Input" << endl;
    }
    goto Flag;


    return 0;
}
