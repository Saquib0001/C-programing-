// access array element using pointer

#include<stdio.h>

int main(){
    int data[5] ;
     int i ;
    printf("enter elements : ");
    for(i=0 ; i<5 ; ++i){
        scanf("%d" , data + i);
    }

    printf("your entered elements are :  ");
    for(i = 0 ; i < 5 ;i++){

        printf("%d\n" , *(data + i) ); // if we not use "*" it gives address not the value.. 
    }

    return 0;
}