#include <stdio.h>
void main()
{
    int sum = 0, number, temp;
    printf("Enter a number:");
    scanf("%d", &number);
    while (number != 0)
    {
        temp = number % 10;
        sum += 10;
        number /= 10;
    }
    printf("Sum of digits of the number is %d", sum);
}