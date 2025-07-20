// WAP to swap, two private data members of the same class using friend function.
#include <iostream>
using namespace std;

class Number
{
private:
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }

    void displayData()
    {
        cout << "a = " << a << ", b = " << b << endl;
    }

    friend void swapValues(Number &obj);
};

void swapValues(Number &obj)
{
    int temp = obj.a;
    obj.a = obj.b;
    obj.b = temp;
}

int main()
{
    Number n;
    n.setData(10, 20);

    cout << "Before Swapping:" << endl;
    n.displayData();

    swapValues(n);

    cout << "After Swapping:" << endl;
    n.displayData();

    return 0;
}
