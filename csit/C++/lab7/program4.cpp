/*
 Design a class called Complex to represent complex numbers.
  WAP to add two complex numbers. Use the concept of friend function.
   The function should return an object of type Complex representing the sum of two complex numbers.

*/
#include <iostream>
using namespace std;

class Complex
{
private:
    float real;
    float imag;

public:
    void setData(float r, float i)
    {
        real = r;
        imag = i;
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }

    friend Complex addComplex(Complex c1, Complex c2);
};

Complex addComplex(Complex c1, Complex c2)
{
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

int main()
{
    Complex num1, num2, sum;

    num1.setData(3.5, 2.5);
    num2.setData(1.5, 4.5);

    cout << "First Complex Number: ";
    num1.display();

    cout << "Second Complex Number: ";
    num2.display();

    sum = addComplex(num1, num2);

    cout << "Sum of the Complex Numbers: ";
    sum.display();

    return 0;
}
