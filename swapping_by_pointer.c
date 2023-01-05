#include<stdio.h>

void swap(int *m ,int *n);

int main (){
  
  int x , y ;
  printf("enter the value of x : ");
  scanf("%d",&x);
  printf("enter the value of y : ");
  scanf("%d", &y);

  printf("before swapping the value of\n x = %d\n  y = %d\n" , x , y);

  swap(&x,&y); // swapppin the value using call by refrence

  printf("After swapping the value of\n x =  %d\n  y = %d" , x,y);

  return 0;

}

// call by refrence
void swap(int *m ,int *n){
    int t = *m ;
    *m = *n;
    *n = t ;
}