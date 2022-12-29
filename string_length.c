//method 1
// take input from user
#include<stdio.h>
int countlength(char arr[]); // function prototype
  
    int main(){
       char name[100];
       fgets(name , 100 , stdin); // fgets take input from user
       printf(" string length are : %d " ,countlength(name));
       return 0;
    }


  int countlength(char arr[]){
       int count = 0;
       for(int i=0 ; arr[i] != '\0' ; i++){
          count++ ;
       }
       return count - 1 ; //due to null char '\0'       
    }


//method 2
// program to count string length using string header file..
#include<stdio.h>
#include<string.h>

int main(){
   
   char name[] = "Saquib";
   int length = strlen(name);

   printf("string length are : %d " ,length);

   return 0 ;

}