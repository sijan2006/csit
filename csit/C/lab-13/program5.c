#include <stdio.h>
#include <string.h>
struct Employee
{
    char name[50];
    int age;
    float salary;
};

int main()
{
    FILE *file;
    struct Employee emp;
    char choice[10];
    file = fopen("employees.txt", "w");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    while (1)
    {
        printf("\nEnter Employee Name: ");
        scanf("%s", emp.name);
        printf("Enter Age: ");
        scanf("%d", &emp.age);
        printf("Enter Salary: ");
        scanf("%f", &emp.salary);
        fprintf(file, "%s %d %.2f\n", emp.name, emp.age, emp.salary);
        printf("Do you want to add another employee? (yes/no): ");
        scanf("%s", choice);
        if (strcmp(choice, "no") == 0)
        {
            break;
        }
    }
    fclose(file);
    file = fopen("employees.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    printf("\nEmployees with Salary Less than 1000:\n");
    int found = 0;
    while (fscanf(file, "%s %d %f", emp.name, &emp.age, &emp.salary) != EOF)
    {
        if (emp.salary < 1000)
        {
            printf("Name: %s, Age: %d, Salary: %.2f\n", emp.name, emp.age, emp.salary);
            found = 1;
        }
    }
    if (!found)
    {
        printf("No employees found with salary less than 1000.\n");
    }
    fclose(file);
    return 0;
}
