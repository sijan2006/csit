#include <stdio.h>
int cadd(int, int);
int csubt(int, int);
int cmulti(int, int);
int cdivi(int, int);
void main()
{
    int n1, n2;
    char ch;
    printf("enter the operation you like to do ");
    scanf(" %c", &ch);
    printf("enter the two  numbers ");
    scanf("%d%d", &n1, &n2);
    switch (ch)
    {
    case '+':
        printf(" the result is %d", cadd(n1, n2));
        break;
    case '-':
        printf(" the result is %d", csubt(n1, n2));
        break;
    case '*':
        printf(" the result is %d", cmulti(n1, n2));
        break;
    case '/':
        printf(" the result is %d", cdivi(n1, n2));
        break;
    }
}
int cadd(int a, int b)
{
    return a + b;
}
int csubt(int a, int b)
{
    return a - b;
}
int cmulti(int a, int b)
{
    return a * b;
}
int cdivi(int a, int b)
{
    return a * b;
}