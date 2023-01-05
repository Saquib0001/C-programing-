// pointer
// for Address P = &L.
// for value L = *p = 25.


#include<stdio.h>

int main(){

   int L = 25 ;
   int *P = &L ;   

   printf("Address of L  = %d\n" , &L);
   printf("Address of P = %d\n" , P);

   printf("value of L = %d\n", L);
   printf("value of P = %d" , *P);
   return 0;
 
}     