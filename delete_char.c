#include <stdio.h>
#include <string.h>

char *delete_char(char *assighn, int character)
{
    char *ptr;

    while (ptr = strchr(assighn, character))  //  strchr stands for searching the char in string in the pointer
           strcpy(ptr, ptr + 1);

    return assighn;
}

int main()
{
    char name[100];
    int character;

    printf("Enter the name string\n");
    gets(name); // here taking the name from user
    printf("Enter the character to delete\n");
    character = getchar(); // in this line getchar(),read the character in the string and assign to ch to delete. 

    delete_char(name, character); // calling the fn() to delete the char.

    puts(name); // after deleted the char then print in this step.

    return 0;
}