/*#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "college wallah is best";
    // printf("%s", str);
    puts(str);
    puts("hello ji"); //  works like printf
    return 0;
}*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[40];
    // scanf("%s", str); // works for only one word
    scanf("%[^\n]s", str);
    printf("your input is : %s", str);
    // gets(str);

    return 0;
}
