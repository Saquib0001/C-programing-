
// Function to print the pattern of 'S'

#include<stdio.h>
void printS()
{
    int S = 8;
    int i, j;
    for (i = 0; i < S; i++) {
        for (j = 0; j < S; j++) {
            if ((i == 0 || i == S / 2  || i == S - 1))
                printf("*");
            else if (i < S / 2 && j == 0)
                printf("*");
            else if (i > S / 2 && j == S - 1)
                printf("*");
            else
                printf (" ");
        }
        printf("\n");
    }
}
 
 int main(){

    printS();

    return 0;
 }