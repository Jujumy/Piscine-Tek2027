/*
** EPITECH PROJECT, 2022
** my_compute_power_rec.c
** File description:
** raise nbr to power rec
*/

int my_compute_power_rec(int nb, int p)
{
    int i = nb;
    if (p == 0) {
        return 1;
    }
    if (p < 0) {
            return 0;
        }

    return nb *  my_compute_power_rec(nb, p - 1);
}
