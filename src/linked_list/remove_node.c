/*
** EPITECH PROJECT, 2021
** linked list
** File description:
** remove an element from a linkedi list
*/

#include "minishell.h"

int remove_firts_element(list_t **list)
{
    list_t *new = NULL;

    if (!list)
        return (84);
    new = (*list)->next;
    free(*list);
    *list = new;
    return (0);
}

int remove_element(list_t *list, int index)
{
    list_t *tmp = list;

    while (tmp != NULL && tmp->next->index != index) {
        tmp = tmp->next;
    }
    tmp->next = tmp->next->next;
    return (0);
}