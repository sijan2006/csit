/*
 Define a class Rectangle with following specifications;
a) Data Members:
i) length ii) width
b) Constructors to assign values to objects c) Destructor to destroy object
d) Member Functions:
i) Area() to find & print the area
ii) Display() to display length and width.
*/
#include <iostream>
using namespace std;
class reactangle
{
private:
    int length;
    int width;

public:
    reactangle(int l, int w)
    {
        length = l;
        width = w;
    }
    ~reactangle()
    {
        length = 0;
        width = 0;
    }
    void area()
    {
        return (2 * (l + b));
    }
    void display()
    {
        cout << "length=" << length << endl;
        cout << "width=" << width << endl;
    }
};
int main()
{
    reactangle r1(5, 6);
    r1.display();
    r1.area();
    return 0;
}