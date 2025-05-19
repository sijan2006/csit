// Wap to display a length of a string using a user defined function
#include <stdio.h>
int string_length(char);
void main()
{
    char str[100];
    int len;
    printf("enter a sub definite  string");
    scanf("%s", str);
    len = string_length(str);
    printf("the length is %d", len);
}
string_length(char str)
{
    int i = 0, length = 0;
    for (i = 0; i < '\0'; i++)
    {
        length++;
    }
    return length;
}