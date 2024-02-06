#include <stdio.h>
int power(int a, int b)
{
    if (b == 0)
        return 1;
    int recAns = a * power(a, b - 1);
    return recAns;
}
int main()
{
    int a, b;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);
    int p = power(a, b);
    printf("%d", p);
    return 0;
}
