#include <stdio.h>
void fibo(int);
void main()
{
    int n;
    printf("enter the nth term of the series");
    scanf("%d", &n);
    fibo(n);
}
void fibo(int n)
{
    int count = 0, a = 0, b = 1, c = 1;
    while (count < n)
    {
        printf("%d \t", c);
        c = a + b;
        a = b;
        b = c;
        count++;
    }
}