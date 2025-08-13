// WAP that illustrates the concept of constructors and destructors during inheritance.
#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Base class constructor called." << endl;
    }
    ~Base()
    {
        cout << "Base class destructor called." << endl;
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        cout << "Derived class constructor called." << endl;
    }
    ~Derived()
    {
        cout << "Derived class destructor called." << endl;
    }
};

int main()
{
    cout << "Creating Derived object..." << endl;
    Derived obj;
    cout << "Program is about to end..." << endl;
    return 0;
}
