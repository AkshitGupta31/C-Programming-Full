#include <stdio.h>
int main()
{
    int n, r;
    printf("enter n :");
    scanf("%d", &n);
    printf("enter r :");
    scanf("%d", &r);
    int ncr;
    int nfac = 1;
    int rfac = 1;
    int nrfac = 1;
    for (int i = 1; i <= n; i++)
    {
        nfac = nfac * i;
    }
    for (int i = 1; i <= r; i++)
    {
        rfac = rfac * i;
    }
    for (int i = 1; i <= n - r; i++)
    {
        nrfac = nrfac * i;
    }
    ncr = nfac / (rfac * nrfac);
    printf("%d", ncr);
    return 0;
}
