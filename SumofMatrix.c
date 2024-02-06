#include <stdio.h>
int main()
{
    int sum = 0;
    int arr[3][4] = {1, 1, 1, 1, 1, 1, 1, 5, 5, 1, 1, 1};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sum += arr[i][j];
        }
    }
    printf("sum of matrix= %d", sum);
    return 0;
}
