#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }

    Complex operator-(Complex c)
    {
        return Complex(real - c.real, imag - c.imag);
    }

    void display()
    {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }
};

int main()
{
    Complex C1(8, 5);
    Complex C2(3, 2);

    Complex C3 = C1 - C2;

    cout << "C1 - C2 = ";
    C3.display();

    return 0;
}