// Wap to convert built in type to user defined class type
#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    Complex()
    {
        real = 0;
        imag = 0;
    }
    Complex(int x)
    {
        real = x;
        imag = 0;
    }
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    int num = 5;
    Complex c = num;
    c.display();
    return 0;
}
