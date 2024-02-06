#include <stdio.h>
int main()
{
    int x;
    printf("enter number");
    scanf("%d", &x);
    if (x > 0)
    {
        printf("%d", x);
    }
    else
    {
        x = x * (-1);
        printf("%d", x);
    }
    return 0;
}
