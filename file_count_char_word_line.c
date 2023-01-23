#include <stdio.h>
#include<stdlib.h>

int main()
{
    FILE * file;
    char path[100] , ch;

    int characters, words, lines;


    file = fopen("read.txt", "r");
    if (file == NULL)
    {
        printf("\nUnable to open file.\n");
        printf("Please check if file exists and you have read privilege.\n");

        exit(EXIT_FAILURE); // for using EXIT_FAILURE so we have to use #include<stdlib.h>
    }


    characters = words = lines = 0;
    while ((ch = fgetc(file)) != EOF)
    {
        characters++;
        printf("%c" , ch) ;

        
        if (ch == '\n' || ch == '\0')
            lines++;

        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
            words++;
    }

    if (characters > 0)
    {
        words++;
        lines++;
    }

    printf("\n\n");
    printf("Total characters = %d\n", characters);
    printf("Total words      = %d\n", words);
    printf("Total lines      = %d\n", lines);

    fclose(file);

  return 0;
}