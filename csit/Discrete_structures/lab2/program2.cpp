// Simulate a function form set A to set B using arrays
#include <iostream>
using namespace std;
int implement(int x)
{
    return (2 * x + 5);
}
int main()
{
    int arr[] = {-2, -1, 0, 1, 2};
    int i;
    for (i = 0; i < 5; i++)
    {
        cout << "the range is " << implement(arr[i]) << endl;
    }
}