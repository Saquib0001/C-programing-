// Array of structure

#include <stdio.h>

struct Book
{
    char Book_name[20];
    int pages;
    float price
};

int main()
{

    struct Book b[100];

    printf("enter the quantity of book : ");
    scanf("%d", &b);

    printf("enter the detail of book:- \n name:\n pages : \n price :\n\n");

    scanf("%s%d%f", b[0].Book_name, &b[0].pages, &b[0].price);
    scanf("%s%d%f", b[1].Book_name, &b[1].pages, &b[1].price) ; 
    scanf("%s%d%f", b[2].Book_name, &b[2].pages, &b[2].price);
  
printf(" for Book_1\n Book name : %s \n pages: %d\n price :%0.2f\n\n", b[0].Book_name, b[0].pages, b[0].price);
printf(" for Book_2\n Book name : %s \n pages: %d\n price :%0.2f\n\n", b[1].Book_name, b[1].pages, b[1].price);
printf(" for Book_3\n Book name : %s \n pages: %d\n price :%0.2f\n\n", b[2].Book_name, b[2].pages, b[2].price);
    return 0;
}