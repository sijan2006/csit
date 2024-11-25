#include <stdio.h>
void main()
{
    int i, j, total, marks;
    for (i = 0; i < 5; i++)
    {
        total = 0;
        printf("lets calculate the total marks of student no %d \n", i + 1);
        for (j = 0; j < 3; j++)
        {
            printf("enter the mark in subject no %d \t", j + 1);
            scanf("%d", &marks);
            total += marks;
        }
        printf("\n the total marks of student no %d is %d\n", i + 1, total);
    }
}