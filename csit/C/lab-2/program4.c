#include <stdio.h>
void main()
{
    int number, rev = 0, temp, orignumber;
    printf("Enter a number:");
    scanf("%d", &number);
    orignumber = number;
    while (number != 0)
    {
        temp = number % 10;
        number = number / 10;
        rev = rev * 10 + temp;
    }
    if (orignumber == rev)
    {
        printf("The number is a palindrome");
    }
    else
    {
        printf("The number is not a palindrome");
    }
}