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
void line_up(int xl);
void branches(int xb);

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
        int xh;
        i = (xt * 2) + xt;
        while(i != 0) {
            my_putchar(space);
            i--;
            }
        my_putchar(stars);
        my_putchar(retour);
        xh = xt - 1;
        hat(xt);
}


void hat(int xh){
        int l = 1;
        while(l != xh){
            int i;
            i = ((xh * 2) + 1) - 1 - l + xh;
            while(i != 0) {
                my_putchar(space);
                i--;
            }
            my_putchar(stars);
            i = (l * 2) - 1;
            while(i != 0) {
                my_putchar(space);
                i--;
            }
        my_putchar(stars);
        my_putchar(retour);
        l++;
            }
        line_up(xh);
        }


void line_up(int xl)
{
    int c = (xl * 2) + 1;
    while(c != 0) {
        my_putchar(stars);
        c--;
    }
    int d = (xl * 2) - 1;
    while(d != 0)
    {
        my_putchar(space);
        d--;
    }
    int second_e = (xl * 2) + 1;
    while(second_e != 0) {
        my_putchar(stars);
        second_e--;
    }
my_putchar(retour);
branches(xl);
}

void branches(int xb) 
{
    my_putchar(retour);
    int l = xb;
    int i = xb * 3;
    while(l != 0){
        while(i != 0){
            my_putchar(space);
            i--;
        }
        my_putchar(stars);
        my_putchar(retour);
        
    l--;
    }
    my_putchar(stars);
}