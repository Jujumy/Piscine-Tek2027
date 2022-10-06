/*
** EPITECH PROJECT, 2022
** My Swap
** File description:
** Swap two pointers
*/
#include <unistd.h>

void  my_swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}
