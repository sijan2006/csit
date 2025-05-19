#include <stdio.h>
#include <string.h>
void conca(char[], char[]);
void main()
{
    char str1[100], str2[100];
    printf("enter two strings");
    scanf("%s%s", &str1, &str2);
    conca(str1, str2);
}
void conca(char str1[100], char str2[100])
{
    int i;
    char concatenated_string[200];
    for (i = 0; i < strlen(str1); i++)
    {
        concatenated_string[i] = str1[i];
    }
    for (i = strlen(str1); i < (strlen(str2) + strlen(str1)); i++)
    {
        concatenated_string[i] = str2[i];
    }
    concatenated_string[i] = '\0';
    printf("\n the string is %s", concatenated_string);
    printf("the menu operator begins with following code");
}