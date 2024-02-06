#include <stdio.h>
void india()
{
    printf("india");
    void australia();
    australia();
    return;
}
void england()
{
    printf("\nengland");
    return;
}
void australia()
{
    printf("\naustralia");
    england();
    void england();
    return;
}

int main()
{
    india();
    void india();
    return 0;
}
