// arr[]={1,2,3,4,3,2,1}  --> 4
#include <stdio.h>
#include <stdbool.h>
int main()
{
    bool flag = false;
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    for (int i = 0; i <= 6; i++)
    {
        for (int j = i + 1; j <= 6; j++)
        {
            if (arr[i] == arr[j])
            {
                i++;
                j = i + 1;
                flag = true;
                break;
            }
        }
        if (flag == false)
        {
            printf("%d", arr[i]);
        }
    }
    return 0;
}
