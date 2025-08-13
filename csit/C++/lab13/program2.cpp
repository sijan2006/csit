// Write a program to declare add generic types in a single function template.
#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
    int x = 5, y = 10;
    cout << "Sum of integers: " << add(x, y) << endl;

    float m = 3.5, n = 2.5;
    cout << "Sum of floats: " << add(m, n) << endl;

    return 0;
}
