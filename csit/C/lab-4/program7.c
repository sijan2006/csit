#include <stdio.h>
void main()
{
    int i, a = 0, b = 1, c = 1, n, count = 0;
    printf("enter the number of terms");
    scanf("%d", &n);
    while (count < n)
    {
        printf("%d ", c);
        c = a + b;
        a = b;
        b = c;
        count++;
    }
}