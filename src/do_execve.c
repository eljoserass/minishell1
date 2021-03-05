/*
** EPITECH PROJECT, 2021
** minishell
** File description:
** do_execve
*/

#include "minishell.h"

int do_execve(param_t *params)
{
    pid_t pid = 0;
    int num = 0;
    int status = 0;
    char *str = find_access(params);
    if (str == NULL)
        return (84);
    if (my_strcmp("not", str) == 0) {
        my_putstr(params->input[0]);
        my_putstr(": Command not found.\n");
        return (0);
    }
    pid = fork();
    if (pid == 0)
        status = execve(str, params->input, params->env);
    waitpid(pid, &num, status);
    if (status != 0)
        my_putstr("Segmentation Fault.\n");
    return (0);
}