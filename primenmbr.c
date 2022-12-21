//method 1
//print prime number from starting 2 to n number

#include<stdio.h>

int  nmbr_is_prime(int nmbr){

    for (int i = 2 ;i*i<nmbr ; i++){

        if( nmbr % i == 0 ){

            return 0; // no return value if remainder became zero
        }
    }
           
           return 1 ;
}
int main (){
      int nmbr;
     printf("enter the value of nmbr : ");
     scanf("%d", &nmbr);


         for(int i = 2 ; i<=nmbr ; i++){

            if(nmbr_is_prime(i)){

                printf("%d\n", i);
            }
         }
    
    return 0;
}