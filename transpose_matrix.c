#include<stdio.h>

int main(){

    static int arr_matrix[10][10],transpose_matrix[10][10];

    int m,n,i,j ;

    printf("enter the order of the matrix : \n"); //order of matrix
    scanf("%d %d" , &m ,&n);

    printf("enter the coefficient of the matrix : \n");
    for(i=0;i<m ;++i){
        for(j=0;j<n;++j){

            scanf("%d",&arr_matrix[i][j]); // print the matrix
        }
        printf("\n");
    }

    for(i = 0 ; i<m ; i++ ){
        for(j=0;j<n;j++){

            transpose_matrix[j][i] =  arr_matrix[i][j];
        }
    }

    //printing the transpose of matrix

    printf("Transpose of matrix is : \n"); //  print the transpose of transpose 
    for(i = 0 ; i<n ; i++ ){
        for(j = 0 ; j<m; j++){

            printf("%d\t",transpose_matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}