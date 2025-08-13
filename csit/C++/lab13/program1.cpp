// Write a program to show the run time polymorphism.
#include <iostream>
using namespace std;

class Base
{
public:
    virtual void show()
    {
        cout << "Base class function" << endl;
    }
};

class Derived : public Base
{
public:
    void show()
    {
        cout << "Derived class function" << endl;
    }
};

int main()
{
    Base *ptr;
    Derived d;
    ptr = &d;
    ptr->show();
    return 0;
}
