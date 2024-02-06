#include <stdio.h> //we will make condition in for not directly print
int main()
{ // if runs then a==1 if not a==0 simple bro
    int x;
    printf("ENTER : ");
    scanf("%d", &x);
    int a = 0;
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            a = 1;
            break; // break --> to stop
        }
    }
    if (x == 1)
        printf("neither composite nor prime");
    else if (a == 0)
        printf("prime");
    else
        printf("composite");
    return 0;
}
