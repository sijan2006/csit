#include <stdio.h>
#include <math.h>
int recurse(float, float);
void main()
{
    float a, b;
    printf("enter two numbers");
    scanf("%f%f", &a, &b);
    recurse(a, b);
}
int recurse(float num1, float num2)
{
    static float temp;
    temp = fmod(num1, num2);
    if (temp == 0)
    {
        printf("the hcf is %.2f", num2);
        return 0;
    }
    num1 = num2;
    num2 = temp;
    recurse(num1, num2);
}