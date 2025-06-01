// 5. WAP that shows the use of setprecision(), and fixed manipulator.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a = 474.36748;
    cout << "normal:" << a << endl;
    cout << "abnormal:" << setprecision(5) << a << endl;
    cout << "more abnormal:" << fixed << a << endl;
    return 0;
}