/*
** EPITECH PROJECT, 2021
** list
** File description:
** list
*/

#include "minishell.h"

list_t *create_node(char *var_name, char *var_value, int index)
{
    list_t *node = malloc(sizeof(list_t));

    if (!node)
        return (NULL);
    node->var_name = my_strdup(var_name);
    node->var_value = my_strdup(var_value);
    node->next = NULL;
    node->index = index;
    return (node);
}