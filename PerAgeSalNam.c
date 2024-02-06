// Person with name salary and age. Declare and initialise 2 variable. print name of 1 and age of 2nd.
#include <stdio.h>
#include <string.h>
int main()
{
    struct person
    {
        int age;
        int salary;
        char name[30];
    } a, b;
    a.age = 30;
    a.salary = 100000;
    strcpy(a.name, "Rohan Carriapa");
    b.age = 24;
    b.salary = 34000;
    strcpy(b.name, "Shantanu");
    printf("%s\n", a.name);
    printf("%d", b.age);
    return 0;
}
