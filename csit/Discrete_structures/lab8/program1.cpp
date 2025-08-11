#include <iostream>
using namespace std;
int main()
{
    bool p, q;
    for (int i = 0; i < 4; i++)
    {
        p = i & 2;
        q = i & 1;
        bool result = !(p || q) || (!p && q);
        cout << p << " " << q << " | " << result << endl;
    }
    return 0;
}