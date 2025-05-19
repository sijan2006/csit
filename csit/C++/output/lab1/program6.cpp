// 6. WAP to access, and modify the global version of a particular variable.
#include <iostream>
using namespace std;
int globalVariable = 10;

void modifyGlobalVariable()
{
    globalVariable = 20;
}

int main()
{

    cout << "Initial value of global variable: " << globalVariable << endl;

    modifyGlobalVariable();

    cout << "Modified value of global variable: " << globalVariable << endl;

    return 0;
}