#include <stdio.h>

int main()
{
    int n, i, j;
    printf("enter the value of array size: ");
    scanf("%d", &n);
    int arr[n];
    printf(" enter the elements in array : ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nprinting the element taking by user : ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)  
        {
            if (arr[j] > arr[i]) 
            {
                int tmp = arr[i]; 
                arr[i] = arr[j];  
                arr[j] = tmp;     
            }
        }
    }
    printf("\n\n value in an array in an Ascending order : "); 
    for (int i = 0; i < n; i++)                           
    {
        printf(" %d ", arr[i]);
    }
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (arr[j] < arr[i]) 
            {
                int tmp = arr[i]; 
                arr[i] = arr[j];  
                arr[j] = tmp;     
            }
        }
    }
    printf("\n\n value in an array in Descending order: "); 
    for (int i = 0; i < n; i++)                             
    {
        printf(" %d ", arr[i]); 
    }

    return 0; 
}