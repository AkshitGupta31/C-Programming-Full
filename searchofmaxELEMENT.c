#include <stdio.h>
int main()
{
    int arr[5];
    printf("Enter : ");
    for (int i = 0; i < 5; i++)
        scanf(" %d ", &arr[i]);
    int max = arr[0]; //-1
    for (int i = 0; i <= 3; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("%d", max);
    return 0;
}
