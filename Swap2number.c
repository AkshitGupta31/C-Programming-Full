#include <stdio.h>
int main()
{
    int a, b;
    printf("enter 1st number: ");
    scanf("%d", &a);
    printf("enter 2nd number: "); // if without 3rd variable then a=a+b; b=a-b; a=a-b;
    scanf("%d", &b);
    int temp = a;
    a = b;
    b = temp;
    printf("the value of a= %d and b = %d", a, b);
    return 0;
}
