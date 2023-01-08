// program to concate string using pointer

#include <stdio.h>

void concatestring(char *str1, char *str2)
{

    char *concate = str1;
    while (*str1 != '\0') 
        str1++;

    *str1 = ' ' ;
    str1++;
    

    while (*str2 != '\0'){
    

        *str1 = *str2;

        str1++, str2++;
    }

    *str1 = '\0';
    printf("concatenated string : \n");
    puts(concate);
}

int main()
{
  //  char string1[20] = "\0", string2[20] = "\0";
    char string1[20] , string2[20] ;

//char string1[20] = {'s','a','q','u','i','b'};
//char string2[20] = {'s','h','a','d','a','b'};

    printf("Enter string 1 : \n");
    gets(string1);

    printf("Enter string 2 : \n");
    gets(string2);

    concatestring(string1, string2);
    return 0;
}