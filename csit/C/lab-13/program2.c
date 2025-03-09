#include <stdio.h>
int main()
{
    FILE *file;
    char ch;
    int alphabets = 0, words = 0, spaces = 0;
    int inWord = 0;
    file = fopen("data.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    while ((ch = fgetc(file)) != EOF)
    {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            alphabets++;
        }
        if (ch == ' ' || ch == '\n' || ch == '\t')
        {
            spaces++;
            inWord = 0;
        }
        else if (!inWord)
        {
            words++;
            inWord = 1;
        }
    }
    fclose(file);
    printf("Total Alphabets: %d\n", alphabets);
    printf("Total Words: %d\n", words);
    printf("Total Spaces: %d\n", spaces);
    return 0;
}
