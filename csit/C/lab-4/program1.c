#include <stdio.h>
void main()
{
    int i;
    printf("the ascii value of letters A-Z are : \n");
    for (i = 65; i < 90; i++)
    {
        printf("%c=%d \n", i, i);
    }
}