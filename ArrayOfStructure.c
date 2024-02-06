#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct pokemon
    {
        int hp;
        int speed;
        int attack;
    } pokemon;
    pokemon arr[3];
    arr[0].attack = 50;
    arr[0].hp = 500;
    arr[0].speed = 2;

    arr[1].attack = 5;
    arr[1].hp = 5000;
    arr[1].speed = 2;

    arr[2].attack = 501;
    arr[2].hp = 5;
    arr[2].speed = 222;
    for (int i = 0; i < 3; i++)
    {
        printf("attack : %d\n", arr[i].attack);
        printf("Heath ha bete : %d\n", arr[i].hp);
    }
}
