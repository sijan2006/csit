#include <stdio.h>
int pali(int);
void main()
{
    int n;
    printf("enter a number ");
    scanf("%d", &n);
    if (pali(n))
    {
        printf("number is palindrome");
    }
    else
    {
        printf("number is not palindrome");
    }
}
int pali(int number)
{
    int temp, rev = 0, i;
    i = number;
    while (number != 0)
    {
        rev *= 10;
        temp = number % 10;
        rev += temp;
        number /= 10;
    }
    if (rev == i)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}