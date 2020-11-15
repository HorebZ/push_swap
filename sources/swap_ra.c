/*
** EPITECH PROJECT, 2018
** PUSH_SWAP
** File description:
** ra action
*/

#include "push_swap.h"

list_t *swap_ra(list_t *l_a)
{
    list_t *new = malloc(sizeof(list_t));
    list_t *tmp = l_a->nxt;
    int     tmp_value = l_a->nbr;

    if (tmp) {
        new->nbr = tmp->nbr;
        new->nxt = NULL;
        if (tmp->nxt) {
            for (tmp = tmp->nxt; tmp->nxt != NULL; tmp = tmp->nxt)
                new = alternate_node(new, tmp->nbr);
            new = alternate_node(new, tmp->nbr);
        }
        new = alternate_node(new, tmp_value);
        return new;
    }
    return l_a;
}
