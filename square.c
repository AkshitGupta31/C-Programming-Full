#include <stdio.h>
int main()
{
    int x;
    printf("enter the rows ");
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    {
        for (int i = 1; i <= x; i++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
