#include <stdio.h>
int main()
{
    int arr[4][2] = {2, 4, 6, 7, 4, 4, 2, 1};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
