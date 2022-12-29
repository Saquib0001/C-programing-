//  C program to print pascal’s triangle// 

#include<stdio.h>
int main()
{
int rows, coef = 1, space, i, j;
printf("\nEnter the number of rows : ");
scanf("%d",&rows);
printf("\n");

for(i=0; i<rows; i++)
{
for(space=1; space <= rows-i; space++)
printf(" ");

for(j=0; j <= i; j++)
{
if (j==0 || i==0)
coef = 1;
else
coef = coef*(i-j+1)/j; // If this line is not present the only 1 print as a pattern of triangle

printf("%3d", coef);
}
printf("\n\n");
}

return 0;
}
