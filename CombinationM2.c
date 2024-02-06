#include <stdio.h>
int factorial(int x)
{
    int fact = 1;
    for (int i = 2; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int n, r;
    printf("enter n :");
    scanf("%d", &n);
    printf("enter r :");
    scanf("%d", &r);
    int nfac = factorial(n);
    int rfac = factorial(r);
    int nrfac = factorial(n - r);
    int ncr = nfac / (rfac * nrfac);
    printf("%d", ncr);
    return 0;
}
