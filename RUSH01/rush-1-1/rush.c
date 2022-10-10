/*
** EPITECH PROJECT, 2022
** rush
** File description:
** rush file
*/

int my_putchar(char c);

const char start_circle = 'o';
const char end_circle = 'o';
const char space = ' ';
const char pipe = '|';
const char hyphen = '-';
const char retour = '\n';

void line_down(int x, int y);
void line_up(int x, int y);

void rush(int x, int y)
{
    if (x < 0 || y < 0) {
        char *overflow = "Invalid Size\n";
        char end = '\0';
        int i = 0;
        while (overflow[i] != end){
            my_putchar(overflow[i]);
            i += 1;
        }
    }
    if (x >= 1 && y >= 1) {
        line_down(x, y);
        my_putchar(retour);
        line_up(x, y);
        if (x > 1) {
            line_down(x, y);
            my_putchar(retour);
        }
    }
}

void line_down(int x, int y)
{
    my_putchar(start_circle);
    for (int i = 0; i < x - 2; i++) {
        my_putchar(hyphen);
    }
    if (x > 1) {
        my_putchar(end_circle);
    }
}

void line_up2(int x, int y)
{
    if (x > 1) {
        for (int i = 0; i < x - 2; i++) {
            my_putchar(space);
        }
        my_putchar(pipe);
    }
}

void line_up(int x, int y)
{
    for (int i = 0; i < y - 2; i++) {
        my_putchar(pipe);
        line_up2(x, y);
        my_putchar(retour);
    }
    if (x == 1) {
        my_putchar(end_circle);
        my_putchar(retour);
    }
}
