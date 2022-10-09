/*
** EPITECH PROJECT, 2022
** Star
** File description:
** Jolie etoile
*/
#include <unistd.h>
const char stars = '*';
const char space = ' ';
const char retour = '\n';

void my_putchar(char c);
void star(int x);
void start(int xt);
void hat(int xh);

void my_putchar(char c)
{
    write(1, &c, 1);
}

void main(void)
{
    star(5);
}

void star(int x)
{
    if (x < 0){
        char *overflow = "Invalid Size\n";
        char end = '\0';
        int i = 0;
        while (overflow[i] != end){
            my_putchar(overflow[i]);
            i += 1;
        }
    }
    if (x >= 1) {
        start(x);
    }
}


void start(int xt) {
        int i;
        i = ((xt * 2) + 1) - 1;
        while(i != 0) {
            my_putchar(space);
            i--;
            }
        my_putchar(stars);
        my_putchar(retour);
        hat(xt)
}


void hat(int xh){
        i = ((xh * 2) + 1) - 2;
        while(i != 0) {
            my_putchar(space);
            i--;
        }
        my_putchar(stars);
        i = xh;
        while(i != 0) {
            my_putchar(space);
            i--;
        }
        my_putchar(stars);
        my_putchar(retour);
}