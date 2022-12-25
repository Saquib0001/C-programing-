#include<stdio.h>

int main(){

int n = 7  , i , j , k;

printf("value of n : %d\n" , n);

for(i = 1; i<=n ; i++){
    for(j = 1; j<=n ; j++){
        k = i<j ? i:j ; //here we using conditional operator
        printf("%d",n - k + 1);
    }

    for(j=n-1;j>=1;j--){
        k = i<j ? i : j;
        printf("%d",n-k+1);

    }
    printf("\n");
   }

   for(i = n-1; i>= 1 ; i--){
      for(j = 1 ; j<=n ; j++){

        k = i<j ? i : j ;

        printf("%d",n-k+1);
      }

      for( j = n-1 ; j>= 1 ; j--){

        k = i<j ? i:j;
        printf("%d",n-k+1);
      }

      printf("\n");
   }

    return 0;
}
