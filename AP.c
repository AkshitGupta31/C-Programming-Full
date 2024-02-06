#include <stdio.h> // 1 3 5 7 9 --> a+(n-1)d --> 1+(n-1)2 --> 1+2n-2 --> 2n-1
int main()
{ // method 1 --- by formula
    int n;
    printf("Enter : ");
    scanf("%d", &n);
    for (int i = 1; i <= 2 * n - 1; i = i + 2)
    {
        printf("%d \n", i);
    }
    return 0;
}
