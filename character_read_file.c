#include<stdio.h>

int main(){
    FILE *fptr;
    char ch ;
    fptr = fopen("myfile.txt" , "r");

    if(fptr==NULL){
        printf("file is not Available\n");
    }

    else {
        while((ch = fgetc(fptr)) !=EOF){
            printf("%c" , ch);
        }
    }

    fclose(fptr);

    return 0;
}