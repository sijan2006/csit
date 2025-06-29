/**
 * 2. DefineaclassROOMwithfollowingspecifications: a. Data Members
i. Length ii. Width
b. MemberFunctions
i. setdata() to assign initial values
ii. display() to display values
iii. area() to find and display the area.
Your program should calculate the areas of three Rooms; R1, R2, R3.
*/
#include <iostream>
using namespace std;
class ROOM
{
private:
    float length;
    float width;

public:
    void setdata()
    {
        cout << "Enter length and width: ";
        cin >> length >> width;
    }

    void display()
    {
        cout << "Length: " << length << ", Width: " << width << endl;
    }

    void area()
    {
        cout << "Area: " << length * width << endl;
    }
};

int main()
{
    ROOM R1, R2, R3;

    cout << "Room 1:" << endl;
    R1.setdata();
    R1.display();
    R1.area();

    cout << "\nRoom 2:" << endl;
    R2.setdata();
    R2.display();
    R2.area();

    cout << "\nRoom 3:" << endl;
    R3.setdata();
    R3.display();
    R3.area();

    return 0;
}
