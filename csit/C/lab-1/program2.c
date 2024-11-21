#include <stdio.h>
void main()
{
    int a;
    float b;
    char c;
    printf("enter a integer decimal and a character : \n");
    scanf("%d %f %c", &a, &b, &c);
    printf(" integer is %d  float is %.2f and character is %c", a, b, c);
}