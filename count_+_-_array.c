#include<stdio.h>

int main(){

    int n , arr[15] , zero = 0 , negative = 0 , positive = 0;
    printf("enter the size of array [0-14] : ");
    scanf("%d", &n);
    printf("enter the element in an array : ");
    for(int i = 0 ; i<n ; i++){
        scanf("%d" ,&arr[i]);

        if( arr[i]> 0){
            positive++ ;
        }

        else if  (arr[i] < 0){
            negative++ ;
        }

        else if (arr[i]==0){
            zero++ ;
        }
    }

    printf("Total positve number in an array : %d\n" , positive );
    printf("Total negative number in an array : %d\n" , negative);
    printf("Total zero number in an array : %d\n" , zero);

    return 0 ;
}