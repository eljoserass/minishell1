/*
** EPITECH PROJECT, 2021
** minishell
** File description:
** retunr the appearence of a symbol in a string
*/

#include "minishell.h"

int is_in_c(char *str, char c)
{
    int i = 0;
    int appear = 0;

    while (str[i] != '\0') {
        if (str[i] == c)
            appear++;
        i++;
    }
    return (appear);
}

int is_new_var(param_t *params)
{
    list_t *tmp = params->list;

    while (tmp != NULL) {
        if (my_strcmp(tmp->var_name, params->input[1]) == 0)
            return (0);
        tmp = tmp->next;
    }
    return (1);
}