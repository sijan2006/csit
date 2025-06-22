/**
 * creata a namespace  called collection that contains two structures NC and AC NC with data members Rs and paisa structure
 * ac with data memers dollar and cent construct member function for the following operations in each structure.
 * A) to input data
 * B) to show data
 * Define an external function conversion( )that takes two arguements first of type nc and second of type ac and find
 * the total amount in rupees (structures in c++)
 * given
 * 1 dollar =100Rc
 */
#include <iostream>
using namespace std;

namespace collection
{
    struct NC
    {
        int Rs;
        int paisa;
        void input()
        {
            cout << "Enter amount in NC (Rs and paisa): ";
            cin >> Rs >> paisa;
        }
        void show()
        {
            cout << "Nepali Currency: " << Rs << " Rs and " << paisa << " paisa" << endl;
        }
    };
    struct AC
    {
        int dollar;
        int cent;
        void input()
        {
            cout << "Enter amount in AC (dollar and cent): ";
            cin >> dollar >> cent;
        }
        void show()
        {
            cout << "American Currency: " << dollar << " dollars and " << cent << " cents" << endl;
        }
    };
}

float conversion(collection::NC n, collection::AC a)
{
    float nc_total = n.Rs + (n.paisa / 100.0);
    float ac_total = (a.dollar * 100.0) + (a.cent * 1.0);

    float total = nc_total + ac_total;
    return total;
}

int main()
{
    collection::NC n;
    collection::AC a;
    n.input();
    a.input();
    n.show();
    a.show();
    float totalRs = conversion(n, a);
    cout << "\nTotal amount in Nepali Rupees: Rs " << totalRs << endl;
    return 0;
}
