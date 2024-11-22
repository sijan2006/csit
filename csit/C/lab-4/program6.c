#include <stdio.h>
void main()
{
    int count = 0, sum = 0, num;
    float avg;
    while (count < 5)
    {
        printf("Enter the number %d:\n", count + 1);
        scanf("%d", &num);
        if (num >= 0)
        {
            sum = sum + num;
            count++;
        }
    }
    avg = sum / 5.0;
    printf("the average of given number is = %.2f", avg);
}