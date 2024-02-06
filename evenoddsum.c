#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int sumeven = 0;
    int sumodd = 0;
    for (int i = 0; i <= 4; i++)
    {
        if (i % 2 == 0)
            sumeven += arr[i];
        else
            sumodd += arr[i];
    }
    printf("%d ", sumeven - sumodd);
    return 0;
}
