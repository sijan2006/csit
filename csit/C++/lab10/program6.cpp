/*
Write a program to convert object of class Dollar to object of class Rupee. Attributes of class Dollar
are DI and Cent and that of class Rupee are Rs and Paisa. (all attributes must have float type)
a. 1$= 100 Cent,
b. 100 Rs = 18,
c. 100 Paisa 1 Rs.
*/
#include <iostream>
using namespace std;

class Rupee;

class Dollar
{
    float D, Cent;

public:
    Dollar(float d = 0, float c = 0)
    {
        D = d;
        Cent = c;
    }
    float getTotalDollar()
    {
        return D + Cent / 100;
    }
    operator Rupee();
};

class Rupee
{
    float Rs, Paisa;

public:
    Rupee(float r = 0, float p = 0)
    {
        Rs = r;
        Paisa = p;
    }
    void display()
    {
        cout << "Rupees: " << Rs << ", Paisa: " << Paisa << endl;
    }
};

Dollar::operator Rupee()
{
    float totalDollar = getTotalDollar();
    float totalRupees = totalDollar * (100.0f / 18.0f);
    float RsPart = (int)totalRupees;
    float PaisaPart = (totalRupees - RsPart) * 100;
    return Rupee(RsPart, PaisaPart);
}

int main()
{
    Dollar d(5, 50);
    Rupee r = d;
    r.display();
    return 0;
}
