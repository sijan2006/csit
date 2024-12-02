#include <stdio.h>
#include <string.h>
void main()
{
    int i, count = 0;
    char string[20];
    printf("enter the string : ");
    scanf("%s", string);
    for (i = 0; i < strlen(string); i++)
    {
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' ||
            string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U')
        {
            count++;
        }
    }
    printf("the number of vowels in the string is %d", count);
}