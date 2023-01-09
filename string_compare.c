// program to compare two string..

#include<stdio.h>
#include<string.h>

int main(){

    char str1[25];
    char str2[25];

    int value ;
    printf("enter the first string : ");
   // scanf("%s",str1);
    gets(str1);
    printf("enter the second string : ");
   // scanf("%s",str2);
     gets(str2) ;
     value = strcmp(str1,str2);

     if(value == 0){
        printf("strings are same ");
     }

     else{
        printf("strings are not same");
     }

     return 0 ;
}