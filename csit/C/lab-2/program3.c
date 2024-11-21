#include <stdio.h>
void main()
{
    float cp, sp, proper, loper;
    printf("Enter the cost price and selling price of the item:");
    scanf("%f%f", &cp, &sp);
    if (sp > cp)
    {
        proper = ((sp - cp) / cp) * 100;
        printf("The profit percentage is: %f%%", proper);
    }
    else
    {
        loper = ((cp - sp) / cp) * 100;
        printf("The loss percentage is: %f%%", loper);
    }
}