#include <stdio.h>
void main()
{
    int count, flag = 0, number, temp, i, j;
    for (j = 10; j <= 20; j++)
    {
        number = j;
        count = 0;
        for (i = 1; i <= number; i++)
        {
            if (number % i == 0)
            {
                count++;
            }
        }
        if (count <= 2)
        {
            flag++;
        }
    }
    printf("there are %d prime numbers between 10 and 20 ", flag);
}