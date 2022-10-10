/*
** EPITECH PROJECT, 2022
** rush
** File description:
** second file for rush task
*/

const char start_slash2 = '/';
const char end_slash2 = '\\';
const char space2 = ' ';
const char star2 = '*';
const char retour2 = '\n';

void my_putchar(char c);
void function(int x, int y);
void line_down1(int x, int y);
void line_down2(int x, int y);

void function(int x, int y)
{
    if (x == 1 && y == 1) {
        my_putchar(star2); my_putchar(retour2);
    }
    if (x == 1 && y != 1) {
        for (int i = 0; i < y; i++) {
            my_putchar(star2);
            my_putchar(retour2);
        }
    }
    if (y == 1 && x != 1) {
        for (int i = 0; i < x; i++) {
            my_putchar(star2);
        }
        my_putchar(retour2);
    }
}

void line_down1(int x, int y)
{
    my_putchar(start_slash2);
    for (int i = 0; i < x - 2; i++) {
        my_putchar(star2);
    }
    if (x > 1) {
        my_putchar(end_slash2);
    }
}

void line_down2(int x, int y)
{
    my_putchar(end_slash2);
    for (int i = 0; i < x - 2; i++) {
        my_putchar(star2);
    }
    if (x > 1) {
        my_putchar(start_slash2);
    }
}
