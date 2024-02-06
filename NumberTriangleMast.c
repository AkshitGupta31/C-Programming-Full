#include <stdio.h>
int main()
{
    int x;
    printf("ENTER :");
    scanf("%d", &x);
    for (int i = 1; i <= x; i++) // rows
    {
        for (int j = 1; j <= x - i; j++) // spaces
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) // number triangle

        {
            printf("%d", k);
        }
        int a = i - 1;
        for (int l = 1; l <= i - 1; l++)
        {

            printf("%d", a);
            a--;
        }
        printf("\n");
    }
    return 0;
}
