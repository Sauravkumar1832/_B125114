#include <iostream>
using namespace std;

class Counter
{
private:
    int value;

public:
    Counter(int v)
    {
        value = v;
    }

    // Prefix increment
    Counter operator++()
    {
        ++value;
        return *this;
    }

    // Postfix increment
    Counter operator++(int)
    {
        Counter temp = *this;
        value++;
        return temp;
    }

    void display()
    {
        cout << value << endl;
    }
};

int main()
{
    Counter c(5);

    cout << "Before prefix increment: ";
    c.display();

    ++c;

    cout << "After prefix increment: ";
    c.display();

    cout << "Before postfix increment: ";
    c.display();

    c++;

    cout << "After postfix increment: ";
    c.display();

    return 0;
}