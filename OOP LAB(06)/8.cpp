#include <iostream>
using namespace std;

class Item
{
private:
    string name;
    double price;
    int quantity;

public:
    Item(string n, double p, int q)
    {
        name = n;
        price = p;
        quantity = q;
    }

    Item operator+(Item obj)
    {
        if (name == obj.name && price == obj.price)
        {
            return Item(name, price, quantity + obj.quantity);
        }
        else
        {
            cout << "Items cannot be combined." << endl;
            return Item("", 0, 0);
        }
    }

    void display()
    {
        cout << "Item Name: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
    }
};

int main()
{
    Item i1("Pen", 10, 5);
    Item i2("Pen", 10, 3);

    Item i3 = i1 + i2;

    cout << "Combined Item:" << endl;
    i3.display();

    return 0;
}