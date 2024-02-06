#include <stdio.h>
int main()
{
    int x;
    printf("ENTER :");
    scanf("%d", &x);
    for (int i = 1; i <= x; i++) // rows
    {
        for (int j = 1; j <= x - i; j++) // spaces column
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) // star
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
