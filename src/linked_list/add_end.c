/*
** EPITECH PROJECT, 2021
** list
** File description:
** list
*/

#include "minishell.h"

list_t *add_end(list_t *current, char *name, char *value, int index)
{
    list_t *aer = create_node(name, value, index);
    list_t *tmp = current;

    if (!aer)
        return (NULL);
    if (!tmp)
        return (aer);
    while (tmp->next != NULL)
        tmp = tmp->next;
    tmp->next = aer;
    return (current);
}