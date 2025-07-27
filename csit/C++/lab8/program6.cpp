/*
 Create a class for counting the number of objects created and destroyed within
 various block using constructor and destructors.
*/
#include <iostream>
using namespace std;

class Counter
{
private:
    static int created;
    static int destroyed;

public:
    Counter()
    {
        created++;
        cout << "Object Created. Total: " << created << endl;
    }

    ~Counter()
    {
        destroyed++;
        cout << "Object Destroyed. Total: " << destroyed << endl;
    }

    static void ShowCount()
    {
        cout << "Total Created: " << created << ", Total Destroyed: " << destroyed << endl;
    }
};

int Counter::created = 0;
int Counter::destroyed = 0;

int main()
{
    Counter::ShowCount();
    Counter a;
    {
        Counter b, c;
        Counter::ShowCount();
    }
    Counter::ShowCount();
    Counter d;
    Counter::ShowCount();

    return 0;
}
