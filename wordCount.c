#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *file;
    char directory[100];
    char character;
    int words;
    file = fopen(argv[1], "r");

    if (file == NULL)
    {
        printf("Enter path of the file: ");
        scanf("%s", directory);
        file = fopen(directory, "r");
    }

    if (file == NULL)
    {
        printf("Error in opening file.\n");
        printf("Please enter a valid file name or path\n");
        exit(EXIT_FAILURE);
    }

    words = 0;

    while ((character = fgetc(file)) != EOF)
    {
        if (character == ' ' || character == '\t' || character == '\n' ||
            character == '\0')
            words++;
    }

    printf("Wordcount = %d\n", (words + 1));
    fclose(file);
    return 0;
}