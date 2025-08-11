// 7. WAP to overload + operator using friend function.
#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
    friend Complex operator+(Complex c1, Complex c2);
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

Complex operator+(Complex c1, Complex c2)
{
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main()
{
    Complex a(3, 4), b(5, 6), c;
    c = a + b;
    c.display();
    return 0;
}
