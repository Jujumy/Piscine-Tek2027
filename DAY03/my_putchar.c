/*
** EPITECH PROJECT, 2022
** MyPutChar
** File description:
** It's gonna be a simple write
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
