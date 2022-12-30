#include <stdio.h>
int main()
{

    int num = 5, row, column; // according to "num" we set "row" and "column" condition
    for (row = 1; row <= num; row++)
    {
        for (column = 1; column <= num; column++)
        {
            if ((column == 2 || column == 3 || column == 4) && (row == 1))
                printf(" ");
            else if ((column == 3) && (row == 2))
                printf(" ");
            else if ((column == 2 || column == 4) && (row == 3))
                printf(" ");
            else if ((column == 2 || column == 3 || column == 4) && (row == 4 || row == 5))
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}