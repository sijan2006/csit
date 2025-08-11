// Check if two propositions are logically equivalent.
#include <iostream>
using namespace std;
int main()
{
    bool p, q;
    bool equivalent = true;
    for (int i = 0; i < 4; i++)
    {
        p = i & 2;
        q = i & 1;
        bool expr1 = !(p || q) || (!p && q);
        bool expr2 = (!p && !q) || (!p && q);
        cout << expr1 << " | " << expr2 << endl;
        if (expr1 != expr2)
        {
            equivalent = false;
            break;
        }
    }
    if (equivalent)
        cout << "The propositions are logically equivalent" << endl;
    else
        cout << "The propositions are not logically equivalent" << endl;
    return 0;
}
