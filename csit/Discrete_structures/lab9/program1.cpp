// Given 13 socks in 3 colors, write a program to find the minimum socks to pick to guarantee 3 of the same color.
#include <iostream>
using namespace std;
int main()
{
    int colors = 3;
    int needed = 3;
    int minSocks = (needed - 1) * colors + 1;
    cout << "Minimum socks to pick: " << minSocks << endl;
    return 0;
}
