// To implement a function that checks if a number is prime.
#include <iostream>
using namespace std;
int main()
{
    int number, i, count = 0;
    cout << "Enter a number: ";
    cin >> number;

    for (i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            count++;
        }
    }
    if (count > 1)
    {
        cout << "the no " << number << " is composite";
    }
    else
    {
        cout << "the no " << number << " is prime";
    }
    return 0;
}