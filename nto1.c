#include <stdio.h>
void decreasing(int n) // recursion
{
    if (n == 0)
        return;
    printf("%d\n", n);
    decreasing(n - 1);
    return;
}
int main()
{
    int n;
    printf("enter : ");
    scanf("%d", &n);
    decreasing(n);
    return 0;
}
