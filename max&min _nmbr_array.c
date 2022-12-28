#include <stdio.h>

int main()
{

    int array[90];
    int i, n, minimum, maximum;

    printf("Enter the size of an array n : ");
    scanf("%d", &n);

    printf("Enter an element in an array : ");
    for (i = 0; i < n; i++)
    {

        scanf("%d", &array[i]);
    }

    minimum = maximum = array[0];
    for (i = 1; i < n; i++)
    {

        if (minimum > array[i])
        {

            minimum = array[i];
        }
        if (maximum < array[i])
        {

            maximum = array[i];
        }
     

    }
       printf("Minimum number of array is : %d \n\n", minimum);
        printf("Maximum number of array is : %d ", maximum);

    return 0;
}