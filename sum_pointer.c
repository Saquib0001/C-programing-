//program to sum & subtract of two number using pointer..

#include<stdio.h>

int main(){

    int first , second ,*a ,*b , sum ,sub ;

    printf("enter the value of first and second number to calculate sum :\n ");
    scanf("%d%d",&first ,&second);

    a = &first ;
    b = &second ;

    sum = *a + *b ;
    sub = *a - *b ;

    printf("the sum of two number are : %d\n " , sum );    
    printf("the subtraction of two number are : %d " , sub );    

    return 0;
}