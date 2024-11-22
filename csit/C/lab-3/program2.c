#include <stdio.h>
void main()
{
    int year;
    printf("Enter the year");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("%d is a leap year", year); // divided by 4, 100, 400 so leap year
            }
            else
                printf("%d is not a leap year", year); // divided by 4 and 100 so leap year
        }
        else
            printf("%d is a leap year", year); // divided by 4 but not 100
    }
    else
        printf("%d is not a leap year", year); // not divided by 4
}
