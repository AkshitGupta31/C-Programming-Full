#include <stdio.h>
int main()
{
    int r, c;
    printf("enter rows: ");
    scanf("%d", &r);
    printf("enter column: ");
    scanf("%d", &c);
    int brr[c][r];
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d ", &arr[i][j]);
        }
    }
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            // printf("%d ", arr[j][i]);
            brr[i][j] = arr[j][i];
        }
        printf("\n");
    }
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
