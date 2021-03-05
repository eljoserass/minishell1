/*
** EPITECH PROJECT, 2021
** minishell
** File description:
** free_linked_list.c
*/

#include "minishell.h"

void free_inside(list_t *list)
{
    free(list->var_name);
    free(list->var_value);
}

void free_linked_list(list_t *list)
{
    list_t *tmp = list;

    while (tmp) {
        tmp = list->next;
        free(list->var_value);
        free(list->var_name);
        free(list);
        list = tmp;
    }
}