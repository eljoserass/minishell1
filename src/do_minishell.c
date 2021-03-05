/*
** EPITECH PROJECT, 2021
** minishell
** File description:
** minishell
*/

#include "minishell.h"

void do_free(path_t *paths, param_t *params, char *command)
{
    free(command);
    free_path(paths);
    free_params(params);
}

int do_main_loop(param_t *params, path_t *paths, char *command, char *prompt)
{
    size_t size = 0;

    while (params->is_exit == 256) {
        print_prompt(prompt);
        if (getline(&command, &size, stdin) == -1)
            return (my_putstr("exit\n"));
        if (execute_command(command, paths, params) == 84)
            return (print_malloc_failed());
    }
}

int do_minishell(char **env, char *prompt)
{
    char *command = NULL;
    param_t *params = init_param();
    path_t *paths = init_fn_pn();
    int exit = 0;

    if ((!params) || (!paths))
        return (print_malloc_failed());
    params->list = put_env_in_ll(env, params);
    if (!params->list)
        return (print_malloc_failed());
    if (!prompt)
        prompt = "$>";
    print_welcome();
    if (do_main_loop(params, paths, command, prompt) == 84)
        return (84);
    exit = params->is_exit;
    do_free(paths, params, command);
    return (exit);
}