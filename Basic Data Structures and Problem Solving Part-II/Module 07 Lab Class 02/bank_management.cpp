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
        this -> account_holder = account_holder;
        this -> address = address;
        this -> age = age;
        this -> password = password;
        this -> account_number = rand() % 1000000000;
        this -> balance = 0;
        cout << "Account Number: " << this->account_number << endl;
    }
    int show_balance(string password)
    {
        if (this -> password == password)
        {
            return this -> balance;
        }
        else
        {
            return -1;
        }
    }

    void add_money(string password, int amount)
    {
        if (amount <= 0)
        {
            cout << "Invalid Amount" << endl;
            return;
        }
        if (this->password == password)
        {
            this->balance += amount;
            cout << "Add money successful" << endl;
        }
        else
        {
            cout << "Password didn't match" << endl;
        }
    }

    void withdraw_money(string password, int amount)
    {
        if (amount <= 0)
        {
            cout << "Invalid Amount" << endl;
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
            cout << "Withdraw money successful" << endl;
        }
        else
        {
            cout << "Password didn't match" << endl;
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
    void add_money_from_bank(BankAccount *myAccount, string password, int amount)
    {
        if (amount <= 0)
        {
            cout << "Invalid Amount" << endl;
            return;
        }
         if (amount > myAccount->show_balance("abc"))
        {
            cout << "Insufficient Balance" << endl;
            return;
        }

        if (myAccount->password == password)
        {
            this->balance += amount;
            myAccount->balance -= amount;
            cout << "Add money from Bank to MyCash successful" << endl;


        }
        else
        {
           cout << "Password didn't match" << endl;
        }
    }
    int my_banalce()
    {
        return this->balance;
    }
};


BankAccount* create_account()
{
    string account_holder, address, password;
    int age;
    cout << "BANK ACCOUNT" << endl;
    cin >> account_holder >> address >> age >> password;

    BankAccount *myAccount = new BankAccount(account_holder, address, age, password);

    return myAccount;

}

void add_money(BankAccount *myAccount)
{
    string password;
    int amount;
    cout << "ADD MONEY" << endl;
    cin >> password >> amount;
    myAccount->add_money(password, amount);
    cout << "Your bank balance is " << myAccount->show_balance("abc") << endl;
}

void withdraw_money(BankAccount *myAccount)
{
    string password;
    int amount;
    cout << "WITHDRAW MONEY" << endl;
    cin >> password >> amount;
    myAccount->withdraw_money(password, amount);
    cout << "Your bank balance is " << myAccount->show_balance("abc") << endl;
}

void add_money_from_bank(BankAccount *myAccount, MyCash *myCash)
{
    string password;
    int amount;
    cout << "Add Money to MyCash" << endl;
    cin >> password >> amount;
    myCash->add_money_from_bank(myAccount, password, amount);
    cout << "Your MyCash balance is " << myCash->my_banalce()<< endl;
    cout << "Your bank balance is " << myAccount->show_balance("abc") << endl;

}

int main()
{
    BankAccount *myAccount = create_account();
    MyCash *myCash = new MyCash();

    Flag:
        int option;
        cout << "Select 1 for Add Money to Bank Account" << endl;
        cout << "Select 2 to Withdraw Money from Bank Account" << endl;
        cout << "Select 3 for Add Money to MyCash from Bank Account" << endl;
        cout << endl;
        cin >> option;
        if (option == 1)
        {
            add_money(myAccount);
            cout << endl;
        }
        else if (option == 2)
        {
            withdraw_money(myAccount);
            cout << endl;
        }
        else if (option == 3)
        {
            add_money_from_bank(myAccount, myCash);
            cout << endl;
        }
        else
        {
            cout << "Invalid Input" << endl;
            cout << endl;
        }
        goto Flag;

    return 0;
}
