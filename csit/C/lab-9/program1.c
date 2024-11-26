#include <stdio.h>
int recurse();
void main()
{
    recurse();
}
int recurse()
{
    static int count = 0;
    printf("Sagarmatha engineering college \n");
    count++;
    if (count < 10)
    {
        recurse();
    }
}