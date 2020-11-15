/*
** EPITECH PROJECT, 2018
** PUSH_SWAP
** File description:
** argument to int (atoi function)
*/

int my_getnbr(char const *str)
{
    int nbr = 0;
    int neg = 0;

    if (*str == '-') {
        str++;
        neg++;
    }
    for (; *str; str++) {
        nbr *= 10;
        nbr  = (*str - 48) + nbr;
    }
    if (neg)
        nbr *= -1;
    return nbr;
}
