/*
** EPITECH PROJECT, 2022
** rush
** File description:
** second file for rush task
*/

const char letter11 = 'A';
const char letter21 = 'C';
const char space2 = ' ';
const char letter31 = 'B';
const char retour2 = '\n';

void my_putchar(char c);
void function(int x, int y);
void line_down1(int x, int y);
void line_down2(int x, int y);

void function(int x, int y)
{
    if (x == 1 && y == 1) {
        my_putchar(letter31); my_putchar(retour2);
    }
    if (x == 1 && y != 1) {
        for (int i = 0; i < y; i++) {
            my_putchar(letter31);
            my_putchar(retour2);
        }
    }
    if (y == 1 && x != 1) {
        for (int i = 0; i < x; i++) {
            my_putchar(letter31);
        }
        my_putchar(retour2);
    }
}

void line_down1(int x, int y)
{
    my_putchar(letter11);
    for (int i = 0; i < x - 2; i++) {
        my_putchar(letter31);
    }
    if (x > 1) {
        my_putchar(letter11);
    }
}

void line_down2(int x, int y)
{
    my_putchar(letter21);
    for (int i = 0; i < x - 2; i++) {
        my_putchar(letter31);
    }
    if (x > 1) {
        my_putchar(letter21);
    }
}
