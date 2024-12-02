#include <stdio.h>
#include <string.h>
void main()
{
    char str[100], *p, i;
    int length;
    printf("enter a string");
    scanf("%s", str);
    length = strlen(str);
    p = str;
    for (i = length; i > -1; i--)
    {
        printf("%c", *(p + i));
    }
}