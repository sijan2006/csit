// Write a program to verify De Morgan’s Laws.
#include <iostream>
using namespace std;
int main()
{
    bool p, q;
    for (int i = 0; i < 4; i++)
    {
        p = i & 2;
        q = i & 1;
        bool result1 = !(p && q);
        bool result2 = !p || !q;
        cout << p << " " << q << " | " << result1 << " | " << result2 << endl;
    }
    return 0;
}