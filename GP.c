#include <stdio.h> // 1 2 4 8 16 32  an=a*r^n-1 --> 1*2^n-1    //method 2 ----- take one more variable
int main()
{
    int n;
    printf("Enter : ");
    scanf("%d", &n);
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        printf("%d \n", a);
        a = a * 2;
    }
    return 0;
}
