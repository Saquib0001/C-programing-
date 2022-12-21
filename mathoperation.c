// arithmetic operation
// method 2
 #include<stdio.h>
void calculation(){

int q,w,a,s,m,M,d;

q = 10;
w = 5;
a = q+w;
s = q-w;
m = q*w;
M = q%w;
d = q/w;
printf("sum of two q & w: %d \n",a);
printf("subtraction of two q & w: %d \n",s);
printf("multiplication of two q & w: %d \n ",m);
printf("modulo of two q & w: %d\n ",M);
printf("division of two q & w: %d\n ",d);

}


int main(){

   calculation();

   return 0;
} 


//arithmetic operation
// method 1

 #include <stdio.h>

int main()
{
    int  x,y,a, s, d, m ;

    x = 15;
    y = 5;
    a = x + y;
    s = x - y;
    d = x / y;
    m = x * y;

    printf("sum of  x & y: %d \n", a);
    printf("subtract of two x & y: %d\n ", s);
    printf("division of  x & y: %d \n" ,d);
    printf(" multiplication of  x & y: %d\n ", m);
    return 0;
}


