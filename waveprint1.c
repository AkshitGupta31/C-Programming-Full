#include <stdio.h>
int main()
{
    int r, c;
    printf("enter rows: ");
    scanf("%d", &r);
    printf("enter column: ");
    scanf("%d", &c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf(" %d ", &arr[i][j]);
        }
    }
    // wave print
    for (int i = 0; i < r; i++)
    {
        printf("\n");
        if (i % 2 == 0)
        {
            for (int j = 0; j < c; j++)
            {
                printf("%d", arr[i][j]);
            }
        }
        else
        {
            for (int j = c - 1; j >= 0; j--)
            {
                printf("%d", arr[i][j]);
            }
        }
    }
    return 0;
}
