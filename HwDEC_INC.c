#include <stdio.h>
void greeting(int n)
{
    if (n == 0)
        return;
    printf("%d\n", n);
    greeting(n - 1);
    printf("%d\n", n);
    return;
}
int main()
{
    int n;
    printf("enter : ");
    scanf("%d", &n);
    greeting(n);
    return 0;
}
