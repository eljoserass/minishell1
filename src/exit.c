/*
** EPITECH PROJECT, 2021
** minishell
** File description:
** functions for the exit command
*/

#include "minishell.h"

int get_exit_status(param_t *params)
{
    int status = 0;
    int tmp = 0;
    int i = 0;

    if (is_int(params->input[1]) != 1) {
        my_putstr("Invalid Syntax\n");
        return (256);
    }
    status = my_getnbr(params->input[1]);
    if (status < 255 && status > 0)
        return (status);
    tmp = status;
    while (i <= tmp) {
        if (status > 255)
            status = 0;
        status++;
        i++;
    }
    return (status);
}

int do_exit(param_t *params)
{
    if (my_strcmp(params->input[0], "exit") != 0)
        return (0);
    if (my_arrsize(params->input) == 2) {
        params->is_exit = get_exit_status(params);
        return (0);
    }
    params->is_exit = 0;
    return (0);
}