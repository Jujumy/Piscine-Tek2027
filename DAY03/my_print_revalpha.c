/*
** EPITECH PROJECT, 2022
** My Print Alpha
** File description:
** 
*/


void my_putchar(char c);

int my_print_revalpha(void)
{
    char a = 'z';
    while(a >= 'a')
    {
        my_putchar(a);
        a--;
    }
    return (0);
}



