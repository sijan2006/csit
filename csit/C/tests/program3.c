#include <stdio.h>
#include <string.h>
void main()
{
    char str[50], rstr[50], i;
    printf("enter a string");
    scanf("%s", str);
    for (i = strlen(str); i > 0; i--)
    {
        rstr[i] = str[strlen(str) - i];
    }
    printf("\n the reverse is \t %s", rstr);
}