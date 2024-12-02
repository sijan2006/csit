#include <stdio.h>
struct student
{
    int roll;
    int marks;
    char name[20];
} s[5];
void main()
{
    int i, max = 0;
    for (i = 0; i < 5; i++)
    {
        printf("enter roll mark and name of the student \n");
        scanf("%d %d %s", &s[i].roll, &s[i].marks, s[i].name);
        if (s[i].marks > max)
        {
            max = s[i].marks;
        }
    }
    for (i = 0; i < 5; i++)
    {
        if (s[i].marks == max)
        {
            printf("the student with highest marks is \n %s \n roll no : %d \n marks : %d", s[i].name, s[i].roll, s[i].marks);
        }
    }
}