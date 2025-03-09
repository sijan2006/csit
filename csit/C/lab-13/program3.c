#include <stdio.h>
int main()
{
    FILE *sourceFile, *destFile;
    char ch;
    sourceFile = fopen("data.txt", "r");
    if (sourceFile == NULL)
    {
        printf("Error opening source file!\n");
        return 1;
    }
    destFile = fopen("file.txt", "w");
    if (destFile == NULL)
    {
        printf("Error opening destination file!\n");
        fclose(sourceFile);
        return 1;
    }
    while ((ch = fgetc(sourceFile)) != EOF)
    {
        fputc(ch, destFile);
    }
    fclose(sourceFile);
    fclose(destFile);
    destFile = fopen("file.txt", "r");
    if (destFile == NULL)
    {
        printf("Error opening destination file for reading!\n");
        return 1;
    }
    printf("Contents of file.txt:\n");
    while ((ch = fgetc(destFile)) != EOF)
    {
        putchar(ch);
    }
    fclose(destFile);
    return 0;
}
