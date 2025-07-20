// WAP to swap private data members of two classes using friend function.
#include <iostream>
using namespace std;

class ClassB; // Forward declaration

class ClassA
{
private:
    int valueA;

public:
    void setData(int a)
    {
        valueA = a;
    }

    void display()
    {
        cout << "Value in ClassA: " << valueA << endl;
    }

    friend void swapData(ClassA &a, ClassB &b);
};

class ClassB
{
private:
    int valueB;

public:
    void setData(int b)
    {
        valueB = b;
    }

    void display()
    {
        cout << "Value in ClassB: " << valueB << endl;
    }

    friend void swapData(ClassA &a, ClassB &b);
};

void swapData(ClassA &a, ClassB &b)
{
    int temp = a.valueA;
    a.valueA = b.valueB;
    b.valueB = temp;
}

int main()
{
    ClassA objA;
    ClassB objB;

    objA.setData(100);
    objB.setData(200);

    cout << "Before Swapping:" << endl;
    objA.display();
    objB.display();

    swapData(objA, objB);

    cout << "\nAfter Swapping:" << endl;
    objA.display();
    objB.display();

    return 0;
}
