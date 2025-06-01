#include <iostream>
using namespace std;

int main()
{
    int n;
    float total = 50.0;
    string name;

    cout << "Enter the name: ";
    cin >> name;

    cout << "Enter the number of units consumed: ";
    cin >> n;

    if (n <= 100)
    {
        total += n * 0.60;
    }
    else if (n <= 300)
    {
        total += 100 * 0.60 + (n - 100) * 0.80;
    }
    else
    {
        total += 100 * 0.60 + 200 * 0.80 + (n - 300) * 0.90;
    }

    if (total > 300)
    {
        total += total * 0.15;
    }

    cout << "Name: " << name << endl;
    cout << "Total bill: Rs. " << total << endl;

    return 0;
}
