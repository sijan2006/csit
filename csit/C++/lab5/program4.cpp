/**
 * 4. Define a class FINDER with, a. Data Member:
i. An integer array of size 10. b. Member functions:
i. getData() to assign values
ii. Largest() to find the largest number.
*/
#include <iostream>
using namespace std;

class FINDER
{
private:
    int arr[10];

public:
    void getData()
    {
        cout << "Enter 10 integers: ";
        for (int i = 0; i < 10; i++)
        {
            cin >> arr[i];
        }
    }

    void Largest()
    {
        int max = arr[0];
        for (int i = 1; i < 10; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
        cout << "Largest number: " << max << endl;
    }
};

int main()
{
    FINDER f;
    f.getData();
    f.Largest();
    return 0;
}
