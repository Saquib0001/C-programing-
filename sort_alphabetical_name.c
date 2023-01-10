// program to print name in alphabetical order
#include<stdio.h>
#include<string.h>

int main(){
    int i,j,n;
    char name[54][15] , temp[20];

    printf("Enter the number of names : ");
    scanf("%d", &n);

    printf("Enter random names in any order :\n");
    for(i = 0 ;i<n ; i++){
        scanf("%s", name[i]);
    }
    for(i = 0 ; i<n ; i++){
        for(j = i+1 ; j<n ; j++){   // if we put j = 0 then it gives opposite order..
            if(strcmp(name[i],name[j])>0){
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }
        }
    }
    printf("\n Sorted name in Alphabetical order:\n");
    for(i = 0 ;i<n ;i++){
        printf("%s\n",name[i]);
    }
    return 0 ;
}