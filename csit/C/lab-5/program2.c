#include <stdio.h>
void main()
{
    int count = 0, number, temp, i;
    printf("Enter a number:");
    scanf("%d", &number);
    for (i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            count++;
        }
    }
    if (count > 2)
    {
        printf("the number is composite i.e not prime");
    }
    else
    {
        printf("the number is prime");
    }
}