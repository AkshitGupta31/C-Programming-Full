#include <stdio.h>
void greeting(int n) // recursion 1 to n METHOD-2
{
    if (n == 0) // if n =3,2,1
        return;
    greeting(n - 1);   // n=2,1=!0 so not go ahead
    printf("%d\n", n); // in 0 ahead then n=1 then 2,3
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
