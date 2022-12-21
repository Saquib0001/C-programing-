#include<stdio.h>

int main(){

    int s = 1 , n  ;

    printf("enter the value of n : ");
    scanf("%d",&n);

    for(int m = 1; m<=n ; m++){

        for(int q = 1 ;q<=m ; q++ ){

            printf("%d\t",s);
            s++ ;
        }

        printf("\n");
    }

      return 0;
}