
//multiplication table of a number
#include<stdio.h>

int main(){

    int n;

    printf("enter the value of desired number of multiplication :  ");
    scanf("%d",&n);
         
         
        printf("the table of desired number is : \n");
       for(int i = 1; i<=10 ; i++){

           
           printf("%d\n", n*i);
       }

       return 0;
}