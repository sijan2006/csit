#include <stdio.h>
int main()
{
    FILE *file;
    char sentence[200];
    file = fopen("data.txt", "w");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    fputs(sentence, file);
    fclose(file);
    file = fopen("data.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Content of the file:\n");
    while (fgets(sentence, sizeof(sentence), file) != NULL)
    {
        printf("%s", sentence);
    }
    fclose(file);
    return 0;
}
