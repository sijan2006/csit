/**
 * Define two structures distance1 and distance2 distance1 has one data member m while distance2 has member km
 * make an external function that takes the two distances and converts the m into km and compare them
 */

#include <iostream>
using namespace std;
struct distance1
{
    float m;
};
struct distance2
{
    float km;
};
void compareDistances(distance1 d1, distance2 d2)
{
    float d1_in_km = d1.m / 1000.0;
    if (d1_in_km > d2.km)
    {
        cout << "Distance1 is greater than Distance2." << endl;
    }
    else if (d1_in_km < d2.km)
    {
        cout << "Distance2 is greater than Distance1." << endl;
    }
    else
    {
        cout << "Both distances are equal." << endl;
    }
}

int main()
{
    distance1 d1;
    distance2 d2;
    cout << "Enter distance in meters (distance1): ";
    cin >> d1.m;
    cout << "Enter distance in kilometers (distance2): ";
    cin >> d2.km;
    compareDistances(d1, d2);
    return 0;
}
