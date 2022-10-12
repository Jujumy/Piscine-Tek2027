/*
** EPITECH PROJECT, 2022
** my_strcat.c
** File description:
** concatenates two strings
*/
char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int length = 0;
    int z;
    while (dest[length] != '\0') {
        length++;
    }
    z = length;
    while (src[i] != '\0') {
        dest[z] = src[i];
        z++;
        i++;
    }
    dest[z] = '\0';
    return dest;
}
