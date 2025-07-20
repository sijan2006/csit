// WAP that makes member function of one class friend function of another class.
#include <iostream>
using namespace std;

class B;

class A
{
private:
    int numA;

public:
    A(int a)
    {
        numA = a;
    }

    void showBData(B &obj);
};

class B
{
private:
    int numB;

public:
    B(int b)
    {
        numB = b;
    }

    friend void A::showBData(B &obj);
};

void A::showBData(B &obj)
{
    cout << "Accessing B's private data from A: " << obj.numB << endl;
}

int main()
{
    A objA(10);
    B objB(20);

    objA.showBData(objB);

    return 0;
}
