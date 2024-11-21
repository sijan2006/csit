#include <stdio.h>
void main()
{
    int seco, hr, min, s;
    printf("Enter the time in seconds:");
    scanf("%d", &seco);
    hr = seco / (60 * 60);
    min = (seco % (60 * 60)) / 60;
    s = (seco % (60 * 60)) % 60;
    printf("Time in hours,minutes and seconds is %d:%d:%d ", hr, min, s);
}