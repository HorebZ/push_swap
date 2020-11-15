/*
** EPITECH PROJECT, 2018
** PUSH_SWAP
** File description:
** push_swap main file
*/

#include "push_swap.h"

list_t *mv_node(list_t *l_a, para_t *mem)
{
    list_t *tmp = malloc(sizeof(list_t));

    tmp = l_a;
    while (tmp->nbr != mem->small) {
        tmp = tmp->nxt;
        l_a = swap_ra(l_a);
        write(1, "ra ", 3);
    }
    return l_a;
}

int small(list_t *l_a, para_t *mem)
{
    list_t *tmp = malloc(sizeof(list_t));

    tmp = l_a;
    for (; tmp->nxt != NULL; tmp = tmp->nxt) {
        if (tmp->nbr < mem->small)
            mem->small = tmp->nbr;
    }
    if (tmp->nbr < mem->small)
        mem->small = tmp->nbr;
    return mem->small;
}

void push_swap(list_t *l_a, para_t *mem, int nbr)
{
    mem->nb_pa = 0;
    while (nbr > 2) {
        mem->small = l_a->nbr;
        mem->small = small(l_a, mem);
        l_a = mv_node(l_a, mem);
        l_a = swap_pb(l_a);
        mem->nb_pa++;
        nbr--;
    }
    if (l_a->nbr > l_a->nxt->nbr)
        write(1, "sa ", 3);
    swap_pa(mem);
}

int first_check(int ac, char **av)
{
    if (ac < 2)
        return 0;
    for (int i = 1; i < ac; i++) {
        if (av[i][0] < 48 || av[i][0] > 57)
            return 0;
    }
    return 1;
}

int main(int ac, char **av)
{
    list_t *l_a = NULL;
    para_t *mem = malloc(sizeof(list_t));

    if (!first_check(ac, av))
        return 84;
    if (ac == 2 || ac == 3) {
        if (ac == 3 && (my_getnbr(av[1]) < my_getnbr(av[2])))
            write(1, "sa\n", 3);
        return 0;
    }
    for (int i = 1; i < ac; i++)
        l_a = my_node(l_a, av[i]);
    push_swap(l_a, mem, (ac - 1));
    return 0;
}
