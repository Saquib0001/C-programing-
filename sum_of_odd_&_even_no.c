#include<stdio.h>

int main(){
    int number, even_sum = 0 , odd_sum = 0 ;

    printf("enter the value of number : ");
    scanf("%d", &number);

    for( int i = 0 ; i<=number ; i++){

        if(i % 2 == 0){
            
            even_sum = even_sum + i;
        }

        else{

            odd_sum = odd_sum + i ;
        }
    }

    printf("\nthe sum of the even number upto %d : %d" , number , even_sum );
    printf("\n\nthe sum of the odd number upto %d : %d" , number , odd_sum );

    return 0;
}