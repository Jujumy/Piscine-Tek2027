/*
** EPITECH PROJECT, 2022
** put_chaar
** File description:
** ouais
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
