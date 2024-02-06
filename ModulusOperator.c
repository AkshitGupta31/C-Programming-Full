#include <stdio.h>
int main()
{
    int x, y; // a is divided by b
    printf("enter a and b : ");
    scanf("%d %d", &x, &y); // no need to write again and again shortcut
    int r = x % y;          // or r=a-b*q (it is long but concept is of division)
    printf("Remainder is : %d", r);
    return 0;
}
