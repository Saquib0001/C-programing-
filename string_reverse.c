/*reverse the word using header file string.h as wll as inside it's header file
present strrev() function to reverse a word in given string..*/

#include<stdio.h>
#include<string.h>

    int main() {

        char string[20];

        printf("enter a word or senctence in the string to be reversed : ");

        scanf("%s", &string);

        //use strrev() function to reverse a string..

        printf("\n after reverse the string : %s " , strrev(string));

        return 0;


    
}