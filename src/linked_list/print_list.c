/*
** EPITECH PROJECT, 2021
** list
** File description:
** list
*/

#include "minishell.h"

void print_list(list_t *list)
{
    list_t *tmp = list;

    while (tmp != NULL) {
        my_putstr(tmp->var_name);
        my_putchar('=');
        my_putstr(tmp->var_value);
        my_putchar('\n');
        tmp = tmp->next;
    }
    free(tmp);
}