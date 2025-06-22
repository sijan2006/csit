// Wap to store and display the GPA's of n number of students
#include <iostream>
using namespace std;
int main()
{
    int n, i;
    float *p;
    cout << "enter no of students ";
    cin >> n;
    p = new float[n];
    for (i = 0; i < n; i++)
    {
        cout << "enter the gpa of student " << endl;
        cin >> *(p + i);
    }
    for (i = 0; i < n; i++)
    {
        cout << "enter the gpa of student  is " << *(p + i) << endl;
    }
    delete[] p;
    return 0;
}