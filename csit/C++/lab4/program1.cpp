// Wap to show the use of new and delete operator
#include <iostream>
using namespace std;
int main()
{
    int a, *p;
    p = new int;
    *p = 10;
    cout << "the value is " << *p;
    delete p;
    return 0;
}