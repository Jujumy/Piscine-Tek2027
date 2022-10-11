/*
** EPITECH PROJECT, 2022
** my_print_params
** File description:
** Prints the parameters
*/

int my_showstr(char const *str);
void my_putchar(char c);

int main(int argc, char* argv[])
{
    for (int i = 0; i < argc; i++) {
        my_showstr(argv[i]);
        my_putchar('\n');
    }
    return (0);
}
