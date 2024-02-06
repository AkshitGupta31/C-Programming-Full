#include <stdio.h>
int main()
{
    int cp, sp;
    printf("enter the selling price : ");
    scanf("%d", &sp);
    printf("enter the cost price : ");
    scanf("%d", &cp);
    if (cp > sp)
    {
        int x = cp - sp;
        printf("loss of : %d", x);
    }
    else
    {
        int y = sp - cp;
        printf("profit of : %d", y);
    }
    return 0;
}
