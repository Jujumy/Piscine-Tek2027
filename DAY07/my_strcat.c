/*
** EPITECH PROJECT, 2022
** my_strcat
** File description:
** my_strcat
*/

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    int to_concatenate_len = my_strlen(src);
    int concatenated_len = my_strlen(dest);

    for (int i = 0; i < to_concatenate_len; i++) {
        int index = concatenated_len + i;
        dest[index] = src[i];
    }
    return (dest);
}
