/*  *****
 *****
 *****
 */
#include <stdio.h>
int main()
{
    int x, y;
    printf("enter the rows : ");
    scanf("%d", &x);
    printf("enter the column : ");
    scanf("%d", &y);
    for (int i = 1; i <= x; i++)
    {
        for (int i = 1; i <= y; i++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
