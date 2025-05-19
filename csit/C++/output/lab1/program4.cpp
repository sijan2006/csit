/*4. A cricket team has the following table of batting figures for a series of test matches:
Write a program to read the figures set out in the above form using manipulator setw() and calculate the batting averages (runs/innings), and print out the complete table including the averages.*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << "players name" << setw(10) << "runs" << setw(10) << "inings" << setw(10) << "avg" << endl;
    string name[] = {"sachin", "saurav", "rahul"};

    int runs[] = {12300, 10000, 8900};
    int innings[] = {123, 100, 89};
    float avg;
    int i;
    for (i = 0; i < 3; i++)
    {
        avg = runs[i] / innings[i];
        cout << name[i] << setw(15) << runs[i] << setw(10) << innings[i] << setw(10) << avg << endl;
    }
    return 0;
}