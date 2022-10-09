/*
** EPITECH PROJECT, 2022
** Star
** File description:
** Jolie etoile
*/

#include <unistd.h>

void my_putchar(char c){
    write(1, &c, 1);
}

void main(void){
    my_putchar('z');
}