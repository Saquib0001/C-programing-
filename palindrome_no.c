// programe to print palindrome number..

#include <stdio.h>
int main()
{
    int num, temp, remainder, reverse = 0;

    printf("enter the number : ");
    scanf("%d", &num);

    temp = num;
    while (num > 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }
    printf("given no is = %d\n", temp);

    printf("its reverse is = %d\n", reverse);

    if ("temp== reverse")
    {
        printf("number is palindrome\n");
    }

    else
    {
        printf("number is not palindrome");
    }
    return 0;
}