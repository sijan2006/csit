/**
 * creata a namespace called collection that contains two name nc and ac . nc with data members Rs and paisa .ac with
 * data members dollar and cent construct a member function for
 * a)input data
 * b)display data
 * Define a external function that takes two arguments fist of type nc and second of ac and find total amount in rupees
 */
#include <iostream>
using namespace std;

namespace collection
{
    class nc
    {
        int rs, paisa;

    public:
        void input()
        {
            cin >> rs >> paisa;
        }

        void show()
        {
            cout << rs << " Rs " << paisa << " paisa" << endl;
        }

        int getTotalPaisa()
        {
            return rs * 100 + paisa;
        }
    };

    class ac
    {
        int dollar, cent;

    public:
        void input()
        {
            cin >> dollar >> cent;
        }

        void show()
        {
            cout << dollar << " $ " << cent << " cents" << endl;
        }

        int getTotalCents()
        {
            return dollar * 100 + cent;
        }
    };
}

float convertToRupees(collection::nc n, collection::ac a)
{
    int totalPaisa = n.getTotalPaisa();
    int totalCents = a.getTotalCents();
    float totalInRupees = totalPaisa / 100.0 + (totalCents * 0.83) / 100.0;
    return totalInRupees;
}

int main()
{
    collection::nc n;
    collection::ac a;
    n.input();
    a.input();
    float total = convertToRupees(n, a);
    cout << "Total in Rs: " << total << endl;
    return 0;
}
