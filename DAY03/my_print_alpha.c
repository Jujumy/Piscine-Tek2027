/*
** EPITECH PROJECT, 2022
** My Print Alpha Piscine
** File description:
** Exercice de la piscine DAY 3
*/

void my_putchar(char c);

int my_print_alpha(void)
{
    char a = 97;
    while(a <= 'z')
    {
        my_putchar(a);
        a++;
    }
    return (0);
}


