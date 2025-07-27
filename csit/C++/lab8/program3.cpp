/*
 Define a class String that could work as a user-defined type string type. a) Include constructors that enable us:
i) to create an uninitialized string
String S1; //string with length 0.
ii) to initialize an object with a string constant at the time of creation like
String S2("Well done!");
b) Member function that adds two strings to make a third string.
Write a complete program to test your class to see that it does the following task:
Creates String objects with zero length.
Creates objects with string constants. Concatenates two string objects properly.
 Displays a desired string object.
*/
#include <iostream>
#include <cstring>
using namespace std;

class String
{
private:
    char *str;

public:
    String()
    {
        str = new char[1];
        str[0] = '\0';
    }

    String(const char *s)
    {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    String Add(String s)
    {
        String temp;
        delete[] temp.str;
        temp.str = new char[strlen(str) + strlen(s.str) + 1];
        strcpy(temp.str, str);
        strcat(temp.str, s.str);
        return temp;
    }

    void Display()
    {
        cout << str << endl;
    }

    ~String()
    {
        delete[] str;
    }
};

int main()
{
    String S1;
    String S2("Well done!");
    String S3(" Keep going.");
    String S4;

    S4 = S2.Add(S3);

    S1.Display();
    S2.Display();
    S3.Display();
    S4.Display();

    return 0;
}
