// 1. WAP to overload pre-increment operator (++) for Complex number.
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
    Complex operator++()
    {
        ++real;
        ++imag;
        return *this;
    }
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1(3, 4);
    ++c1;
    c1.display();
    return 0;
}
