#include <stdio.h>
int main()
{
    int n;
    int nsr = n - 1;
    int nsp = 1;
    printf("EnTeR : ");
    scanf("%d", &n);
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        printf("*");
    }
    for (int j = 1; j <= nsr; j++)
    {
        printf("*");
    }
    for (int k = 1; k <= nsp; k++)
    {
        printf(" ");
    }
    for (int j = 1; j <= nsr; j++)
    {
        printf("*");
    }
    nsp += 2;
    nsr--;
    printf("\n");
    return 0;
}
