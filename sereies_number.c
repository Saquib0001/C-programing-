#include<stdio.h>

int main(){

    int n , series;
    printf("enter the value of n : ");
    scanf("%d",&n);

    for(int i = 0 ; i<=n  ; i++){

        if( i % 2  == 0){

            series =  (-1) * i * i ; 

        }

        else{

          series =   i * i ;
        }
      printf("%d\t" ,series); 
    }

    return 0;
}