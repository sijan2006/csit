// Write a function interest() to calculate the interest. The function should take offload value for principal p, int value for time t, and float value for rate r, whose default value of 3.5 for rate r. Write a main function that gets the value of p and t from the user to test the function.
#include <iostream>
using namespace std;
float interest(float p, int t, float r = 3.5)
{
    return (p * t * r) / 100;
}

int main()
{
    float principal;
    int time;
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter time (in years): ";
    cin >> time;
    float result = interest(principal, time);
    cout << "Simple interest is: " << result << endl;
    return 0;
}
