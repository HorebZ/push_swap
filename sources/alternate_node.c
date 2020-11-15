/*
** EPITECH PROJECT, 2018
** PUSH_SWAP
** File description:
** help for ra fonction
*/

#include "push_swap.h"

list_t *alternate_node(list_t *l, int nmbr)
{
    list_t *lis = malloc(sizeof(list_t));
    list_t *tmp = l;

    lis->nbr = nmbr;
    lis->nxt = NULL;
    if (tmp == NULL)
        return lis;
    else {
        for (; tmp->nxt != NULL; tmp = tmp->nxt);
        tmp->nxt = lis;
    }
    return l;
}
