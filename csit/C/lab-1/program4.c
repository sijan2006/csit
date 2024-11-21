#include <stdio.h>
void main()
{
    char c, upr;
    printf("enter a letter : \n");
    scanf("%c", &c);
    upr = c - 32;
    printf("the uppercase is %c", upr);
}