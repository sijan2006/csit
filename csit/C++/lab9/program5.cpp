// 5. WAP to overload <= operator.
#include <iostream>
using namespace std;

class Number
{
    int value;

public:
    Number(int v = 0)
    {
        value = v;
    }
    bool operator<=(Number n)
    {
        return value <= n.value;
    }
};

int main()
{
    Number n1(5), n2(10);
    if (n1 <= n2)
        cout << "n1 is less than or equal to n2" << endl;
    else
        cout << "n1 is greater than n2" << endl;
    return 0;
}
