#include <stdio.h>
#include <string.h>
void main()
{
    int i, j;
    char strings[5][20], *string[5], temp[20];
    for (i = 0; i < 5; i++)
    {
        printf("enter %d element \n:", i + 1);
        scanf("%s", strings[i]);
        string[i] = strings[i];
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 1; j < i + 1; j++)
        {
            if (strcmp(string[i], string[j]) < 0)
            {
                strcpy(temp, (string[i]));
                strcpy((string[i]), (string[j]));
                strcpy((string[j]), temp);
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("%s\n", string[i]);
    }
}