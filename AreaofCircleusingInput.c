#include <stdio.h>
int main()
{
    int r;
    printf("enter the radius : ");
    scanf("%d", &r);
    float a;
    a = 3.14 * r * r;
    printf("area of circle : %f", a);
    return 0;
}
