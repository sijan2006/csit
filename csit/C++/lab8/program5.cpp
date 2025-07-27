/*
Compare () to compare two distance objects and returns the result as object. II. Display () to display result
5) WAP that shows the concept of constructor overloading Your program should include: a) Default Constructor ID
b) Parameterized Constructor
c) Copy Constructor
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

class Sample
{
private:
    int ID;

public:
    Sample()
    {
        ID = 0;
        cout << "Default Constructor, ID: " << ID << endl;
    }

    Sample(int x)
    {
        ID = x;
        cout << "Parameterized Constructor, ID: " << ID << endl;
    }

    Sample(const Sample &obj)
    {
        ID = obj.ID;
        cout << "Copy Constructor, ID: " << ID << endl;
    }
};

int main()
{
    Distant d1(5, 10);
    Distant d2(6, 5);
    Distant d3;
    d3 = d1.Compare(d2);
    d3.Display();

    Sample s1;
    Sample s2(100);
    Sample s3 = s2;

    return 0;
}
