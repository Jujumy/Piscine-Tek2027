/*
** EPITECH PROJECT, 2022
** my_swap.c
** File description:
** swap two char
*/

void my_swap (int *a, int *b)
{
    int stock = *a;
    *a = *b;
    *b = stock;
}
