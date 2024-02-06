#include <stdio.h>
int main()
{
    int arr[4] = {1, 6, 4, 18};
    int max = arr[0];
    for (int i = 0; i <= 3; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    int smax = arr[0];
    for (int j = 0; j <= 3; j++)
    {
        if (arr[j] != max && arr[j] > smax)
        {
            smax = arr[j];
        }
    }
    printf("%d", smax);
    return 0;
}
