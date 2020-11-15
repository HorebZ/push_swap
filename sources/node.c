/*
** EPITECH PROJECT, 2018
** PUSH_SWAP
** File description:
** create node for list
*/

#include "push_swap.h"

list_t *my_node(list_t *l, char *str)
{
    list_t *lis = malloc(sizeof(list_t));
    list_t *tmp = l;

    lis->nbr = my_getnbr(str);
    lis->nxt = NULL;
    if (tmp == NULL)
        return lis;
    else {
        for (; tmp->nxt != NULL; tmp = tmp->nxt);
        tmp->nxt = lis;
    }
    return l;
}
