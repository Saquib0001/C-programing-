// program to calculate length of string... 

#include<stdio.h>
#include<string.h>

int main()
{
    char string[30] , *ptr ;
    
    int i = 0 ;
     printf("enter the string : ");
     gets(string);
     ptr = string ; 

     while(*ptr != '\0'){

        i++; // here i counting  the string..
        ptr++ ; // ptr++ run till until it's not find the null character '\0'.. 
     }

     printf("length of string are : %d" , i);

     return 0 ;
}