/*
Define a class Distant with following specifications:
a. Data Members: Inch, Feet
b. Constructors to assign values
c. Member Functions:
I. Compare () to compare two distance objects and returns the result as object.
II. Display () to display result
*/
#include <iostream>
using namespace std;

class Distant
{
private:
    int Feet;
    int Inch;

public:
    Distant()
    {
        Feet = 0;
        Inch = 0;
    }

    Distant(int f, int i)
    {
        Feet = f;
        Inch = i;
        if (Inch >= 12)
        {
            Feet += Inch / 12;
            Inch = Inch % 12;
        }
    }

    Distant Compare(Distant d)
    {
        int total1 = Feet * 12 + Inch;
        int total2 = d.Feet * 12 + d.Inch;

        if (total1 >= total2)
            return *this;
        else
            return d;
    }

    void Display()
    {
        cout << "Feet: " << Feet << ", Inch: " << Inch << endl;
    }
};

int main()
{
    Distant d1(5, 8);
    Distant d2(6, 2);
    Distant d3;

    d3 = d1.Compare(d2);

    d3.Display();

    return 0;
}
