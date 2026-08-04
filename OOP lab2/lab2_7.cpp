#include <iostream>
#include <string>
using namespace std;

// Class to manage product inventory
class Product
{
private:
    int productID;
    string productName;
    int quantity;
    float price;

public:
    // Function to accept product details
    void input()
    {
        cout << "Enter Product ID: ";
        cin >> productID;

        cout << "Enter Product Name: ";
        cin.ignore();
        getline(cin, productName);

        cout << "Enter Quantity Available: ";
        cin >> quantity;

        cout << "Enter Price Per Unit: ";
        cin >> price;
    }

    // Function to display product details
    void display()
    {
        cout << "\nProduct Details" << endl;
        cout << "Product ID: " << productID << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Quantity Available: " << quantity << endl;
        cout << "Price Per Unit: " << price << endl;
    }

    // Function to update quantity after selling
    void sell()
    {
        int units;

        cout << "\nEnter number of units sold: ";
        cin >> units;

        // Check if enough stock is available
        if (units <= quantity)
        {
            quantity = quantity - units;
            cout << "Product sold successfully." << endl;
        }
        else
        {
            cout << "Insufficient stock." << endl;
        }
    }

    // Function to calculate and display inventory value
    void inventoryValue()
    {
        float total;

        total = quantity * price;

        cout << "Total Inventory Value: " << total << endl;
    }
};

int main()
{
    // Creating object of Product class
    Product p;

    p.input();
    p.display();
    p.sell();
    p.display();
    p.inventoryValue();

    return 0;
}