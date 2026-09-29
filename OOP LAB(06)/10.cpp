#include <iostream>
using namespace std;

class Product
{
private:
    string name;
    double price;
    int quantity;

public:
    Product(string n, double p, int q)
    {
        name = n;
        price = p;
        quantity = q;
    }

    Product operator+(Product p)
    {
        if (name == p.name && price == p.price)
        {
            return Product(name, price, quantity + p.quantity);
        }

        cout << "Products cannot be combined." << endl;
        return Product("", 0, 0);
    }

    bool operator>(Product p)
    {
        return (price * quantity) > (p.price * p.quantity);
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Total Value: " << price * quantity << endl;
    }
};

int main()
{
    Product p1("Laptop", 50000, 2);
    Product p2("Laptop", 50000, 1);

    Product p3 = p1 + p2;

    cout << "After Addition:" << endl;
    p3.display();

    cout << endl;

    if (p1 > p2)
    {
        cout << "Product 1 has greater total value." << endl;
    }
    else
    {
        cout << "Product 2 has greater or equal total value." << endl;
    }

    cout << endl;

    cout << "Original Product 1:" << endl;
    p1.display();

    cout << endl;

    cout << "Original Product 2:" << endl;
    p2.display();

    return 0;
}