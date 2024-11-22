#include <stdio.h>
void main()
{
    int a, b;
    char ch;
    printf("*******************\n which operation do you want to do ?\n  + \t -\t * \t /\n\n");
    scanf(" %c", &ch);
    printf("enter two numbers \n");
    scanf("%d%d", &a, &b);
    switch (ch)
    {
    case '+':
        printf("%d + %d =%d", a, b, (a + b));
        break;
    case '-':
        printf("%d - %d =%d", a, b, (a - b));
        break;
    case '*':
        printf("%d * %d =%d", a, b, (a * b));
        break;
    case '/':
        printf("%d / %d =%f", a, b, ((float)a / b));
        break;
    default:
        printf("Sorry invalid input  \n valid inputs are \n  + \t -\t * \t /\n\n");
    }
}