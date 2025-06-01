// Wap to read multiple lines of text from keyboard in C++
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    string temp = " ";
    cout << "enter multiple lines of text";
    while (getline(cin, str))
    {
        if (str.empty())
        {
            break;
        }
        temp += str;
        temp += "\n";
    }
    cout << "text are " << endl
         << temp;
    return 0;
}
