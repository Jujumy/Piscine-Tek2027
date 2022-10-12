/*
** EPITECH PROJECT, 2022
** my_revstr.c
** File description:
** rev a string
*/

char *my_revstr(char *str)
{
    int first = 0;
    int last = 0;
    int temp;

    while (str[last] != '\0') {
        last++;
    }
    last--;

    while (last > first) {
        temp = str[first];
        str[first] = str[last];
        str[last] = temp;
        first++;
        last--;
    }
    return str;
}
