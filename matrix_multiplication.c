#include <stdio.h>

int main()
{
int m, n, p, q, r, c, z, sum = 0;      // m & n row &column of matrices_1,  p & q row and column of matrices_2  
int matrics_1[10][10], matrics_2[10][10], matrics_ans[10][10];

printf("Enter number of rows and columns of  matrix_1 :\n");
scanf("%d%d", &m, &n);
printf("Enter elements of matrix 1\n");

for (r = 0; r < m; r++)
for (c = 0; c < n; c++)
scanf("%d", &matrics_1[r][c]);

printf("\nEnter number of rows and columns of matrics_2\n");
scanf("%d%d", &p, &q);

if (n != p) // n is column of matrices_1 and   p is row of matrices_2  
            // so for matrices multiplication n should be equal to p i.e.. n==p  
            // and matrices form of order "m*q"
printf("\nThe matrices can't be multiplied with each other.\n");
else
{
printf("\nEnter elements of matrix2\n");

for (r = 0; r < p; r++)
for (c = 0; c < q; c++)
scanf("%d", &matrics_2[r][c]);

for (r = 0; r < m; r++) {
for (c = 0; c < q; c++) {
for (z = 0; z < p; z++) {
sum = sum + matrics_1[r][z]*matrics_2[z][c]; // here z column  of matrices_1 and for matrices_2 z is row ,,for multiplcation...

}

matrics_ans[r][c] = sum;
sum = 0;
}
}

printf("\nProduct of the matrices:\n");

for (r = 0; r < m; r++) {
for (c = 0; c < q; c++)
printf("%d\t", matrics_ans[r][c]);

printf("\n");
}
}

return 0;
}