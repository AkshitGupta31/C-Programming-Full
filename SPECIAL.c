#include <stdio.h>

int main()
{
    int n = 4; // Number of rows in the diamond
    int num;

    // Loop through the upper part of the diamond
    for (int i = 1; i <= n; i++)
    {
        num = n - i + 1;
        for (int j = 1; j <= n - i; j++)
        {
            printf("%d", num);
            num--;
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("%d", i);
        }
        num = i + 1;
        for (int j = 1; j <= n - i; j++)
        {
            printf("%d", num);
            num++;
        }
        printf("\n");
    }

    // Loop through the lower part of the diamond
    for (int i = n - 1; i >= 1; i--)
    {
        num = n - i + 1;
        for (int j = 1; j <= n - i; j++)
        {
            printf("%d", num);
            num--;
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("%d", i);
        }
        num = i + 1;
        for (int j = 1; j <= n - i; j++)
        {
            printf("%d", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
