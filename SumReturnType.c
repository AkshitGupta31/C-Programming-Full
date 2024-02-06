#include <stdio.h>
int factorial(int n)
{
    if (n == 1) // base case
        return 1;
    return n + factorial(n - 1); // + --> * rest same
}
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    int fact = factorial(n);
    printf("%d", fact);
    return 0;
}
