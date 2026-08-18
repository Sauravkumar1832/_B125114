#include <iostream>
#include <string>
using namespace std;

class FoodOrder
{
private:
    int orderID;
    string foodItem;
    int quantity;
    float price;

public:
    // Constructor
    FoodOrder(int id, string item, int q, float p)
    {
        orderID = id;
        foodItem = item;
        quantity = q;
        price = p;
    }

    // Friend function
    friend void calculateBill(FoodOrder f);
};

void calculateBill(FoodOrder f)
{
    float totalBill;

    // Calculate total bill
    totalBill = f.quantity * f.price;

    // Display order details
    cout << "\n----- Food Order Details -----" << endl;
    cout << "Order ID: " << f.orderID << endl;
    cout << "Food Item: " << f.foodItem << endl;
    cout << "Quantity: " << f.quantity << endl;
    cout << "Price: " << f.price << endl;
    cout << "Total Bill: " << totalBill << endl;
}

int main()
{
    int id;
    string item;
    int quantity;
    float price;

    cout << "Enter Order ID: ";
    cin >> id;

    cin.ignore();

    cout << "Enter Food Item: ";
    getline(cin, item);

    cout << "Enter Quantity: ";
    cin >> quantity;

    cout << "Enter Price: ";
    cin >> price;

    FoodOrder order(id, item, quantity, price);

    calculateBill(order);

    return 0;
}