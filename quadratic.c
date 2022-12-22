#include<stdio.h>
#include<math.h>

int main(){
 
 //D = discriminant,R = real root,IR = imaginary root

float a,b,c , D , R1 , R2, IR1,IR2;

printf("enter the value of a  : ");
scanf("%f",&a);

printf("enter the value of  b  : ");
scanf("%f",&b);

printf("enter the value of c : ");
scanf("%f",&c);                                                            
    
    D = b*b - (4*a*c);

   if( D>0 ){
    R1= (-b/ + sqrt(D))/(2*a);
      R2= (-b/ - sqrt(D))/(2*a);

      printf("R1 = %.3f\n" , R1);
      printf("R2 = %.3f\n" , R2);
   }
   else if (D==0){

    R1 =-b/(2*a);
    R2 =-b/(2*a);
   
    printf("R1 = %.2f" , R1);
     printf("R2 = %.2f" , R2);

   }

   else {

    IR1  = -b/(2*a);
    IR2  = sqrt(-D)/(2*a);

    printf("R1 = %.2f + i%.2f\n", IR1);
    printf("R2 = %.2f - i%.2f\n", IR2);

   }
 
     return 0;
}





