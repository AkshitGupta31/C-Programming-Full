#include <stdio.h>
int main()
{
    int x;
    printf("enter the number : "); //  && -- if both   || -- any one
    scanf("%d", &x);
    if (x < 999 && x > 99)
    {
        printf(" 3 digit number");
    }
    else
    {
        printf("not a 3 digit number");
    }
    return 0;
}
