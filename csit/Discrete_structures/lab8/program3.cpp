// Generate truth table for (p → q)^(q → r) → (p → r).
#include <iostream>
using namespace std;
int main()
{
    bool p, q, r;
    for (int i = 0; i < 8; i++)
    {
        p = i & 4;
        q = i & 2;
        r = i & 1;
        bool result = !((!p || q) && (!q || r)) || (!p || r);
        cout << p << " " << q << " " << r << " | " << result << endl;
    }
    return 0;
}
