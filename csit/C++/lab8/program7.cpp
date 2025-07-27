// WAP that shows dynamic objects.
#include <iostream>
using namespace std;

class Demo
{
private:
    int value;

public:
    Demo()
    {
        value = 0;
        cout << "Default Constructor. Value: " << value << endl;
    }

    Demo(int v)
    {
        value = v;
        cout << "Parameterized Constructor. Value: " << value << endl;
    }

    void Display()
    {
        cout << "Value: " << value << endl;
    }

    ~Demo()
    {
        cout << "Destructor Called. Value was: " << value << endl;
    }
};

int main()
{
    Demo *obj1 = new Demo;
    Demo *obj2 = new Demo(50);

    obj1->Display();
    obj2->Display();

    delete obj1;
    delete obj2;

    return 0;
}
