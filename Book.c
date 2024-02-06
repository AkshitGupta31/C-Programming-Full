// structure type book with name, price, and no. of pages
#include <stdio.h>
#include <string.h>
int main()
{
    struct book
    {
        int pages;
        float price;
        char name[50];
    } a, b, c;
    a.pages = 100;
    a.price = 45.56;
    strcpy(a.name, "Seven Secret");
    printf("Pages of a : %d\n", a.pages);
    printf("Price is :%f\n", a.price);
    printf("Name is %s\n", a.name); // lly for b and c
    return 0;
}
