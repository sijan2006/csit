// Write a conversion routine for converting class type Distance to basic type float.
#include <iostream>
using namespace std;

class Distance
{
    int feet;
    float inches;

public:
    Distance(int f = 0, float i = 0.0)
    {
        feet = f;
        inches = i;
    }
    operator float()
    {
        return feet + inches / 12;
    }
};

int main()
{
    Distance d1(5, 6);
    float totalFeet = d1;
    cout << "Total distance in feet: " << totalFeet << endl;
    return 0;
}
