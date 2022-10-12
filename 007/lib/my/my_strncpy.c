/*
** EPITECH PROJECT, 2022
** my_strncpy.c
** File description:
** copy str til n
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    int length = 0;
    int lengthd = 0;
    while (src[length] != '\0') {
        length++;
    }
    while (i < n) {
        dest[i] = src[i];
        i++;
    }
    if (n > length) {
        dest[i] = '\0';
    }
    return (dest);
}
