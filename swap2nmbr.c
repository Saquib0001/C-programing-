/*#include<stdio.h>

int main(){
    int cont, s,t ;
      s = 10 ;
      t = 15 ;
    printf(" before swapping the value of s = %d\n  and  t = %d\n",s,t);
    cont = s ;
    s = t ;
    t = cont ;

    printf("after swapping the value of  s = %d \n and  t = %d ",s,t);
   return 0;


}*/

#include <stdio.h>

int main()
{

    int t, z;

    t = 100;
    z = 55;

    printf(" before swapping  the value of t = %d\n and  the value of z = %d\n\n", t, z);
    t = t ^ z;

    z = t ^ z;

    t = t ^ z;
    printf(" after swapping  the value of t = %d\n and  the value of z = %d", t, z);
    return 0;
}
