/**
 * 6. Define a class SAMPLE with data member an array of character. Write a member function called ReverseIt() that reverse a string (an array of character). Use a for loop that swaps the first and last character, then the second, and next-to last character and so on.
 */
#include <iostream>
#include <cstring>
using namespace std;

class SAMPLE
{
private:
    char str[100];

public:
    void getData()
    {
        cout << "Enter a string: ";
        cin >> str;
    }

    void ReverseIt()
    {
        int len = strlen(str);
        for (int i = 0; i < len / 2; i++)
        {
            char temp = str[i];
            str[i] = str[len - 1 - i];
            str[len - 1 - i] = temp;
        }
        cout << "Reversed string: " << str << endl;
    }
};

int main()
{
    SAMPLE s;
    s.getData();
    s.ReverseIt();
    return 0;
}
