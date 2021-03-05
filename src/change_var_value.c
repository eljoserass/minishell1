/*
** EPITECH PROJECT, 2021
** minishelll
** File description:
** change the variable value
*/

#include "minishell.h"

int change_var_value(param_t *params)
{
    list_t *tmp = params->list;

    if (my_arrsize(params->input) <= 2)
        return (0);
    while (tmp != NULL) {
        if (my_strcmp(params->input[1], tmp->var_name) == 0) {
            tmp->var_value = my_strdup(params->input[2]);
            return (0);
        }
        tmp = tmp->next;
    }
    return (0);
}