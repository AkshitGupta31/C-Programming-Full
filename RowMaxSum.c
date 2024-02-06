#include <stdio.h>
int main()
{
    int arr[3][4] = {1, 2, 3, 1, 0, 5, 0, 2, 9, 0, 0, 3};
    int max = -1;
    int sum = 0, temp;
    for (int i = 0; i < 3; i++)
    {
        sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum += arr[i][j];
        }
        if (max < sum)
        {
            max = sum;
            temp = i;
        }
    }
    printf("the maximum row sum is %d of %d row", temp + 1, max);
    return 0;
}
