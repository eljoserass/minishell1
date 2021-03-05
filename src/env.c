/*
** EPITECH PROJECT, 2021
** minishell
** File description:
** functions for the handling of the env
*/

#include "minishell.h"

int print_env(param_t *params)
{
    print_list(params->list);
    return (0);
}

int check_exceptions(param_t *params)
{
    if (my_arrsize(params->input) == 1) {
        print_list(params->list);
        return (1);
    }
    if (my_str_isalpha(params->input[1]) == 0) {
        my_putstr("Variable name must contain alphanumeric characters.\n");
        return (1);
    }
    if (is_new_var(params) == 0) {
        change_var_value(params);
        return (1);
    }
    return (0);
}

int set_env(param_t *params)
{
    if (check_exceptions(params) == 1)
        return (0);
    if (my_arrsize(params->input) == 2) {
        params->index++;
        params->list =
        add_end(params->list, params->input[1], "", params->index);
        return (0);
    }
    params->index++;
    params->list =
    add_end(params->list, params->input[1], params->input[2], params->index);
    return (0);
}

int unset_env(param_t *params)
{
    list_t *tmp = params->list;
    int len = my_arrsize(params->input);
    int i = 1;

    if (len < 2) {
        my_putstr("unsetenv: Too few arguments.\n");
        return (0);
    }
    while (tmp != NULL) {
        if (my_strcmp(params->input[i], tmp->var_name) == 0) {
            remove_element(params->list, tmp->index);
            i++;
            tmp = params->list;
        }
        tmp = tmp->next;
        if (i > len - 1)
            return (0);
    }
    return (0);
}