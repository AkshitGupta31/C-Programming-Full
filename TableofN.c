#include <stdio.h>
int main()
{
    int n;
    printf("ENTER :");
    scanf("%d", &n);
    for (int i = n; i <= (n * 10); i = i + n)
    {
        printf("%d \n", i);
    }
    return 0;
}
