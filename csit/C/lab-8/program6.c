#include <stdio.h>
int prime(int);
void main()
{
    int a, b, i;
    printf("enter the range of the numbers you want to examine");
    scanf("%d%d", &a, &b);
    for (i = a; i <= b; i++)
    {
        if (prime(i))
        {
            printf("%d \t", i);
        }
    }
}
int prime(int number)
{
    int i, count = 0;
    for (i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            count++;
        }
    }
    if (count <= 2)
    {
        return 1;
    }
    return 0;
}