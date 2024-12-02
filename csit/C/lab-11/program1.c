#include <stdio.h>
#include <string.h>
int length(char ch[]);
void main()
{
    char str[100];
    int len;
    printf("enter the string");
    scanf("%s", str);
    len = length(str);
    printf("the size is %d", len);
}
int length(char ch[])
{
    int i, count = 0;
    for (i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}