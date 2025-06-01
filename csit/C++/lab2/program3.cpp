/*
Wap to enter  a line with embedded spaces in C++ using getline()
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    cout << "enter the name :" << endl;

    getline(cin, name);
    cout << "The name is :" << name;
    return 0;
}
