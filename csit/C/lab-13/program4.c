#include <stdio.h>

struct Bike
{
    char lotName[50];
    int lotNo;
    float cost;
};

int main()
{
    FILE *file;
    struct Bike bikes[4];
    float totalCost = 0;

    // Open file in write mode
    file = fopen("bikes.txt", "w");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    // Input bike details and write to file
    printf("Enter details of 4 bikes:\n");
    for (int i = 0; i < 4; i++)
    {
        printf("\nBike %d:\n", i + 1);
        printf("Enter Lot Name: ");
        scanf("%s", bikes[i].lotName);
        printf("Enter Lot Number: ");
        scanf("%d", &bikes[i].lotNo);
        printf("Enter Cost: ");
        scanf("%f", &bikes[i].cost);

        // Write to file
        fprintf(file, "%s %d %.2f\n", bikes[i].lotName, bikes[i].lotNo, bikes[i].cost);
    }

    fclose(file); // Close file after writing

    // Open file in read mode to calculate total cost
    file = fopen("bikes.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    // Read data from file and calculate total cost
    printf("\nBike Details from File:\n");
    while (fscanf(file, "%s %d %f", bikes[0].lotName, &bikes[0].lotNo, &bikes[0].cost) != EOF)
    {
        printf("Lot Name: %s, Lot No: %d, Cost: %.2f\n", bikes[0].lotName, bikes[0].lotNo, bikes[0].cost);
        totalCost += bikes[0].cost;
    }

    fclose(file); // Close file after reading

    // Display total cost
    printf("\nTotal Cost of Bikes: %.2f\n", totalCost);

    return 0;
}
