#include <stdio.h>
int main()
{
    int a = 5;
    int *x = &a;
    int **y = &x;
    *x = 7;
    printf("%p\n", &a);
    printf("%p\n\n", x);

    printf("%d\n", *x);
    printf("%d\n\n", a);

    printf("%p\n", &x);
    printf("%p\n\n", y);

    printf("%d\n", *x);
    printf("%d\n", **y);
    printf("%d\n", a);
    return 0;
}
