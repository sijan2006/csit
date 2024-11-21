#include <stdio.h>
void main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number % 2 == 0)
    {
        printf("%d is even", number);
    }
    else
    {
        printf("%d is odd", number);
    }
}