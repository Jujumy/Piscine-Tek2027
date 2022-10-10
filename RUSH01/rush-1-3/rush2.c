/*
** EPITECH PROJECT, 2022
** rush
** File description:
** rush file
*/

int my_putchar(char c);

const char letter1 = 'A';
const char letter2 = 'C';
const char space = ' ';
const char letter3 = 'B';
const char retour = '\n';

void function(int x, int y);
void line_down1(int x, int y);
void line_down2(int x, int y);
void line_up(int x, int y);
void line_up2(int x, int y);

void rush(int x, int y)
{
    if (x < 0 || y < 0 || x > 2147483647 || y > 2147483647) {
        char *overflow = "Invalid Size\n";
        char end = '\0';
        int i = 0;
        while (overflow[i] != end){
            my_putchar(overflow[i]);
            i += 1;
        }
    }
    if (x >= 1 < 2147483647 && y >= 1 < 2147483647) {
        function(x, y);
        if (x > 1 && y > 1) {
            line_down1(x, y);
            my_putchar(retour);
            line_up(x, y);
            line_down2(x, y);
            my_putchar(retour);
        }
    }
}

void line_up(int x, int y)
{
    for (int i = 0; i < y - 2; i++) {
        my_putchar(letter3);
        line_up2(x, y);
        my_putchar(retour);
    }
}

void line_up2(int x, int y)
{
    if (x > 1) {
        for (int i = 0; i < x - 2; i++) {
            my_putchar(space);
        }
        my_putchar(letter3);
    }

}
