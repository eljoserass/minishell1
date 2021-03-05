/*
** EPITECH PROJECT, 2021
** list
** File description:
** list
*/

#include "minishell.h"

list_t *add_start(list_t *current, char *name, char *value, int index)
{
    list_t *aer = create_node(name, value, index);

    if (!aer)
        return (NULL);
    aer->next = current;
    return (aer);
}