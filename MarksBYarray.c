#include <stdio.h>
int main()
{
    int arr[10] = {36, 66, 77, 89, 23, 67, 3, 90, 0, 89};
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] < 35)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
