#include<stdio.h>

int main(){

    int number , reverse = 0 , remainder ;

    printf("Enter the value number : ");
    scanf("%d",&number);

    while(number != 0){

        //chronology of reverse the number e.g. 123 = 321
        remainder =  number % 10 ;
        reverse = reverse * 10 + remainder;
        number = number/10 ;
    }

    printf("Reversed the number  =  %d ",reverse);

    return 0;
}