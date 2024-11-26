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
    static int count = 1, fact = 1;
    if (count > number)
    {
        printf("%d ! = %d", number, fact);
        return 0;
    }
    fact *= count;
    count++;
    recurse(number);
}