/*
** EPITECH PROJECT, 2022
** my_rev_print_params
** File description:
** Print the params in reverse order
*/

void my_putchar(char c);
int my_showstr(char const *str);

int main(int argc, char* argv[])
{
    for (int i = argc; i > -1; i--) {
        my_showstr(argv[i]);
        my_putchar('\n');
    }
    return (0);
}
