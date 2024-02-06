#include <stdio.h>
int main()
{
    int x;
    printf("enter the number : ");
    scanf("%d", &x);
    if (x % 5 == 0 || x % 3 == 0)
        if (x % 15 != 0)
        {
            printf("div by 5 or 3 but not 15");
        }
        else
        {
            printf("div by 5 or 3 and 15");
        }
    else
    {
        printf("not div by neither 5 nor 3 not even 15");
    }
    return 0;
}
