#include<stdio.h>

int main(){

int length,breadth;

printf("enter the value of length : ");
scanf("%d",&length);

printf("enter the value of breadth : ");
scanf("%d",&breadth);

for(int i = 1; i<= length ; i++){

   for(int j = 1 ; j <= breadth ; j++){

    if(i==1 || i == length || j==1 || j==breadth)
        printf("*");

        else
         printf(" ");
   }
   
          printf("\n");
}

  return 0;

}