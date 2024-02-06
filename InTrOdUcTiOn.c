#include <stdio.h>
int main()
{
    int arr[4] = {2, 4, 5, 1};
    arr[2] = 100;
    printf("%d \n", arr[2]);
    float a[3] = {2.1, 3.4, 9};
    printf("% f \n", a[2]);
    char b[2] = {'a', 'A'};
    printf("%c \n", b[1]);
    int c[4];
    for (int i = 0; i <= 3; i++)
        scanf("%d", &c[i]);
    printf("output : %d", c[2]);
    return 0;
}
