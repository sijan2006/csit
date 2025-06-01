// Wap to input any ASCII value and change it to its corresponding character
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int ascii;
    cout << "enter the ascii value " << endl;
    cin >> ascii;
    cout << (char)ascii;
}