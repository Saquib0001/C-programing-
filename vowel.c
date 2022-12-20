#include <stdio.h>

int main()
{

    char word;

    printf("enter the word  : ");
    scanf("%c", &word);

    switch (word)
    {

    case 'a':
        printf("a : given word are vowel\n");
        break;

    case 'e':
        printf("e : given word are vowel \n");
        break;
    case 'i':
        printf("i : given word are vowel\n");

        break;

    case 'o':
        printf("o : given word are vowel\n");

        break;

    case 'u':
        printf("u : given word are vowel\n");
        break;

       case 'A':
        printf("A : given word are vowel\n");
        break;
    case 'E':
        printf("e : given word are vowel \n");
        break;
    case 'I':
        printf("i : given word are vowel\n");

        break;

    case 'O':
        printf("o : given word are vowel\n");

        break;

    case 'U':
        printf("U : given word are vowel\n");
        break;

    default:
        printf("given word are not vowel");

        break;

        return 0;
    }
}