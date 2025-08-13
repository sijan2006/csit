// Write a program to convert inch into centimeter. (1 cm = 0.39 inches)
#include <iostream>
using namespace std;

class Distance
{
    float cm;

public:
    Distance(float inches)
    {
        cm = inches / 0.39;
    }
    void display()
    {
        cout << "Distance in centimeters: " << cm << endl;
    }
};

int main()
{
    float inches;
    cout << "Enter distance in inches: ";
    cin >> inches;
    Distance d = inches;
    d.display();
    return 0;
}
