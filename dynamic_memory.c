// program to dynamically create an array to store integer

#include<stdio.h>
#include<stdlib.h>

int main(){

    int *ptr;
    ptr = (int*) malloc(6*sizeof(int));  // here 6 is allocate on run time..
    ptr[0] = 1 ;
    ptr[1] = 2 ;
    ptr[2] = 3 ;
    ptr[3] = 4 ;
    ptr[4] = 5 ;
    ptr[5] = 6 ;

    for(int i = 0 ; i<6 ; i++){
        printf("%d\n",ptr[i]);
    }
    return 0 ;
    }