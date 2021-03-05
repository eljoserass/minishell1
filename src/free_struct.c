/*
** EPITECH PROJECT, 2021
** minishell
** File description:
** free path_t struct
*/

#include "minishell.h"

void free_path(path_t *opt)
{
    int i = 0;

    while (i < 9) {
        free(opt[i].command);
        i++;
    }
    free(opt);
}

void free_params(param_t *params)
{
    free_linked_list(params->list);
    free(params);
}