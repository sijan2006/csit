#include <stdio.h>
#include <string.h>
void main()
{
    int i, flag = 0;
    char strings[5][20], string[20];
    for (i = 0; i < 5; i++)
    {
        printf("enter %d element \n:", i + 1);
        scanf("%s", strings[i]);
    }
    printf("enter the string to check");
    scanf("%s", string);
    for (i = 0; i < 5; i++)
    {
        if (strcmp(strings[i], string) == 0)
        {
            printf("the data is found on the list ");
            flag = 1;
        }
    }
    if (flag < 1)
    {
        printf("the data is not found on the list ");
    }
}