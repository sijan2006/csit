// WAP to enter a roll, name and fee in a abc.txt and display them.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int roll;
    string name;
    float fee;

    cout << "Enter Roll Number: ";
    cin >> roll;
    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter Fee: ";
    cin >> fee;

    ofstream outFile("abc.txt");
    if (!outFile)
    {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }
    outFile << roll << endl;
    outFile << name << endl;
    outFile << fee << endl;
    outFile.close();

    ifstream inFile("abc.txt");
    if (!inFile)
    {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }
    cout << "\nData from abc.txt:" << endl;
    inFile >> roll;
    inFile.ignore();
    getline(inFile, name);
    inFile >> fee;

    cout << "Roll: " << roll << endl;
    cout << "Name: " << name << endl;
    cout << "Fee: " << fee << endl;

    inFile.close();
    return 0;
}
