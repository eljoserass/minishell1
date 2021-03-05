/*
** EPITECH PROJECT, 2021
** minishell
** File description:
** look in the struct for the command and launch it
*/

#include "minishell.h"

int launch_command(path_t *paths, param_t *params)
{
    int i = 1;

    while (paths[i].command != NULL) {
        if (my_strcmp(params->input[0], paths[i].command) == 0) {
            paths[i].fn(params);
            return (0);
        }
        i++;
    }
    if (params->is_exit == 256)
        paths[0].fn(params);
    return (0);
}