#include <stdio.h>
#include <string.h>

int checkpalindrome(char *string) 
{
    int i, n, count = 0 ;

    n = strlen(string); 

    for (i = 0; i < n / 2; i++) {
        if (string[i] == string[n-i-1]){
            count++;
        }
    }
    if (count == i)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{

    char string[100];

    printf("Enter the string: ");
    gets(string);

    if (checkpalindrome(string)) 
    {
        printf("given string is palindrome");
    }
    else
    {
      printf("given string is not palindrome");
    }

    return 0;
}