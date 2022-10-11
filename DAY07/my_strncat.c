/*
** EPITECH PROJECT, 2022
** my_strncat
** File description:
** Appends n bytes of the given string to dest
*/

int my_strlen(char const *str);

char *my_strncat(char *dest, char const *src, int n)
{
    int src_length = my_strlen(src);

    for (int i = 0; i < n; i++) {
        int index = src_length + i;
        dest[index] = src[i];
    }
    return (0);
}
