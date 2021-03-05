/*
** EPITECH PROJECT, 2021
** minishell
** File description:
** initialize the strucut of the command
*/

#include "minishell.h"

path_t *init_fn_pn_two(void)
{
    path_t *opt = malloc(sizeof(path_t) * (9 + 1));

    if (!opt)
        return (NULL);

    opt[0].command = NULL;
    opt[0].fn = &do_execve;
    opt[1].command = my_strdup("cd");
    opt[1].fn = &do_cd;
    opt[2].command = my_strdup("env");
    opt[2].fn = &print_env;
    opt[3].command = my_strdup("setenv");
    opt[3].fn = &set_env;
    opt[4].command = my_strdup("unsetenv");
    opt[4].fn = &unset_env;

    if (!opt[1].command || !opt[2].command ||
    !opt[3].command || !opt[4].command)
        return (NULL);
    return (opt);
}

path_t *init_fn_pn(void)
{
    path_t *opt = init_fn_pn_two();

    if (!opt)
        return (NULL);
    opt[5].command = my_strdup("ls");
    opt[5].fn = &do_execve;
    opt[6].command = my_strdup("clear");
    opt[6].fn = &clear_screen;
    opt[7].command = my_strdup("exit");
    opt[7].fn = &do_exit;
    opt[8].command = my_strdup("hola");
    opt[8].fn = &print_hola;
    opt[9].command = NULL;
    opt[9].fn = NULL;

    if (!opt[5].command || !opt[6].command || !opt[7].command ||
    !opt[8].command)
        return (NULL);
    return (opt);
}

param_t *init_param(void)
{
    param_t *params = malloc(sizeof(param_t));

    if (!params)
        return (NULL);

    params->env = NULL;
    params->input = NULL;
    params->list = NULL;
    params-> index = 0;
    params->is_exit = 256;

    return (params);
}