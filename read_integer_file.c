// program to read three integer from file...
#include<stdio.h>

int main(){
    FILE *fptr ;
    fptr = fopen("read_integer_file.txt","r");
    int s ;
        fscanf(fptr,"%d",&s);
        printf("number = %d\n",s);
    fclose(fptr);
    return 0 ;
}
