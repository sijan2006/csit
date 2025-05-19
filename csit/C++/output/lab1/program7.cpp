/*
7. An electricity board charges the following rates to domestic users to discourage large consumption of energy.
For the first 100 units - 60P per unit For the next 200 units - 80P per unit Beyond 300 units - 90P per unit
All users are charged a minimum Rs. 50.00. If the total amount is more than Rs. 300 then additional surcharge of 15% is added.
Write a program to read the name of user and number of units consumed and print out the charges with name.
*/
#include <iostream>
using namespace std;
int main()
{
    int total = 50, n;
    string name;
    cout << "enter the name" << endl;
    cin >> name;
    cout << "enter the no of units" << endl;
    cin >> n;
    if (n < 100)
    {
        total += (60 * n);
    }
    else if (n < 300)
    {
        total += (80 * n);
    }
    else
    {
        total += (90);
    }
    if (total > 300)
    {
        total += (0.15 * total);
    }
    cout << "the name is" << name << " the total bill is" << total;

    return 0;
}