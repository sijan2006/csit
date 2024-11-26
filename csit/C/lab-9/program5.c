#include <stdio.h>
int recurse(int);
void main()
{
    int n;
    printf("enter a number");
    scanf("%d", &n);
    recurse(n);
}
int recurse(int number)
{
    static int rev = 0, temp;
    if (number == 0)
    {
        printf("the reverse of the number is %d", rev);
        return 0;
    }
    rev *= 10;
    temp = number % 10;
    rev += temp;
    number /= 10;
    recurse(number);
}