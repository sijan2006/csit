// WAP to write and read an object of student class to and from a file news.txt. Class student having name, roll and two functions for input and display.
#include <iostream>
#include <fstream>
using namespace std;

class Student
{
    string name;
    int roll;

public:
    void input()
    {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Roll: ";
        cin >> roll;
        cin.ignore();
    }
    void display()
    {
        cout << "Name: " << name << "\nRoll: " << roll << endl;
    }
};

int main()
{
    Student s;

    // Input student data
    s.input();

    // Write object to file
    ofstream outFile("news.txt", ios::binary);
    outFile.write((char *)&s, sizeof(s));
    outFile.close();

    // Read object from file
    Student s1;
    ifstream inFile("news.txt", ios::binary);
    inFile.read((char *)&s1, sizeof(s1));
    inFile.close();

    cout << "\nData read from file:\n";
    s1.display();

    return 0;
}
