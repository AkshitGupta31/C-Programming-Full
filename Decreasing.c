#include <stdio.h>
void greeting(int n) // recursion
{
    if (n == 0)
        return;
    printf("Good Morning\n");
    greeting(n - 1);
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
