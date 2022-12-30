#include <stdio.h>
#include <string.h>

int main()
{

    char str[20], c1, c2;

    printf("enter the word :  ");
    gets(str);

    printf("enter a character replace : ");
    c1 = getchar();
    getchar();

    printf("\n enter character to replace with %c :  ", c1);

    c2 = getchar();
    printf("\nbefore replace : %s ", str);

    for (int i = 0; str[i]; i++)
    {
        if (str[i] == c1)
        {
            str[i] = c2;
        }
    }
    printf("\n after replace : %s ", str);

    return 0;
}