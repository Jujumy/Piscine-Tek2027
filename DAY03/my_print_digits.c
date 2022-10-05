
void my_putchar(char c);

int my_print_digits(void)
{
    char a = '0';
    while (a <= '9') {
        my_putchar(a);
        a++;
    }
    return (0);
}
