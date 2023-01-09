#include<bits/stdc++.h>
using namespace std;

class Shop
{
public:
    string product_name[10];
    int product_price[10];
    int product_quantity[10];
    int product_number;

protected:
    int total_income;

public:
    Shop()
    {
        this->total_income = 0;
    }
    int get_total_income()
    {
        return this->total_income;
    }
    void set_total_income(int amount)
    {
        this->total_income += amount;
    }
};

Shop* get_shop_data(Shop *myShop)
{
    int product_number;
    cout << "Number of products: ";
    cin >> product_number;

    myShop->product_number = product_number;

    for (int i = 0; i < product_number; i++)
    {
        cout << "Product " << i+1 << " Name: ";
        cin >> myShop->product_name[i];

        cout << "Product " << i+1 << " Price: ";
        cin >> myShop->product_price[i];

        cout << "Product " << i+1 << " Quantity: ";
        cin >> myShop->product_quantity[i];
        cout << endl;
    }

    return myShop;
}

void print_shop_info(Shop *myShop)
{
    cout << "\t\tBUY PRODUCTS" << endl;
    cout << "\t\t------------" << endl;
    cout << "Product Index\t\t";
    for (int i = 0; i < myShop->product_number; i++)
    {
        cout << i+1 << "\t";
    }
    cout << endl;
    cout << "Product Name\t\t";
    for (int i = 0; i < myShop->product_number; i++)
    {
        cout << myShop->product_name[i] << "\t";
    }
    cout << endl;

    cout << "Product Price\t\t";
    for (int i = 0; i < myShop->product_number; i++)
    {
        cout << myShop->product_price[i] << "\t";
    }
    cout << endl;

    cout << "Product Quantity\t";
    for (int i = 0; i < myShop->product_number; i++)
    {
        cout << myShop->product_quantity[i] << "\t";
    }
    cout << endl << endl;
}

void handle_sale(Shop *myShop)
{
    int idx, quantity;
    cout << "Which product do you want? From 1 to " << myShop->product_number << ": ";
    cin >> idx;
    idx--;

    cout << "What is the quantity that you want of " << myShop->product_name[idx] << " : ";
    cin >> quantity;
    cout << endl;

    if (quantity <= myShop->product_quantity[idx])
    {
        myShop->product_quantity[idx] -= quantity;
    }
    else
    {
        cout << "This quantity is not available" << endl;
        return;
    }
    myShop->set_total_income(myShop->product_price[idx] * quantity);

    cout << myShop->product_name[idx] << " bought " << quantity << " pc successfuly" << endl;
    cout << "Your total income : " << myShop->get_total_income() << endl;
    cout << endl;
}

int main()
{
    Shop *myShop = new Shop();

    // Take input shop data from user
    get_shop_data(myShop);
    cout << endl;

    Flag:
        print_shop_info(myShop);
        handle_sale(myShop);
        goto Flag;




    return 0;
}
