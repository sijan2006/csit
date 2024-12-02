#include <stdio.h>
#include <string.h>
void conca(char ch1[], ch2[]);
void main()
{
    char str2[50], str3[50];
    printf("enter the two strings");
    scanf("%s%s", str2, str3);
    conca(str2, str3);
}
void conca(char ch1[], ch2[])
{
    char conca[100];
    strcpy(conca, ch1);
    strcat(conca, ch2);
    printf("%s", conca);
}