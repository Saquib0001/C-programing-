#include<stdio.h>

int main(){
    
        int size;
        printf("enter the size of an array : \n");
        scanf("%d",&size);
        int arr[size] ;
    printf("insert an element in array :\n");
    for(int i=0 ; i<size ; i++){

        scanf("%d",&arr[i]);
    }
        printf("printing the value in present in array : \n");
    for(int i = 0; i<size; i++){

        printf("%d\n",arr[i]);
    }
    return 0;
}
