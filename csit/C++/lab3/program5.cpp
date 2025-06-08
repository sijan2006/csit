#include <iostream>
using namespace std;

// Function to convert character to ASCII value
int CONVERT(char ch = 'Z')
{
    return (int)ch;
}

int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    cout << "ASCII value of '" << ch << "' is: " << CONVERT(ch) << endl;

    return 0;
}
