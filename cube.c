// to find the cube of given number... 
// method 1
#include<stdio.h>

int main(){

    int n ;
    printf("enter the value of n : ");
    scanf("%d" , &n);

    printf(" number of the cube are : %d " ,n*n*n);

    return 0 ;
}

//method 2
#include<stdio.h>
#include<math.h>

int main(){
     
     int n  , x ; 
  
   printf("enter the value of n : ");
    scanf("%d" , &n);

    x =  pow(n,3);
    printf(" number of the cube are :%d ", x);

    return 0 ;
}

