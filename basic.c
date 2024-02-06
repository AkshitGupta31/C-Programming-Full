/*#include <stdio.h>
int main()
{
    char arr[5] = {'a', 'b', 'c', 'd', 'e'};
    printf("%c", arr[1]);
    return 0;
}
#include <stdio.h>
int main()
{
    char ch = 'A';
    int x = (int)ch;   //typecasting
    printf("%c", ch);
    printf("%d", ch);
    printf("%d", x);
    return 0;
}*/
// creating character array*/
#include <stdio.h>
int main()
{
    char arr[] = "hello";
    int i = 0;
    while (arr[i] != '\0')
    {

        printf("%c", arr[i]);
        i++;
    }
    printf("\n%d is length", i);
    return 0;
}
