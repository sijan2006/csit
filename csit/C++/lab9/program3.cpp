// 3. WAP to overload post-increment operator (++).
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
    Complex operator++(int)
    {
        Complex temp = *this;
        real++;
        imag++;
        return temp;
    }
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1(3, 4), c2;
    c2 = c1++;
    c1.display();
    c2.display();
    return 0;
}
