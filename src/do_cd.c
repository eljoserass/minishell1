/*
** EPITECH PROJECT, 2021
** minishell
** File description:
** cd
*/

#include "minishell.h"

char *get_pwd(param_t *params)
{
    list_t *tmp = params->list;

    while (tmp != NULL) {
        if (my_strcmp(tmp->var_name, "PWD") == 0)
            return (tmp->var_value);
        tmp = tmp->next;
    }
    return ("not");
}

int change_old_pwd(param_t *params)
{
    list_t *pwd = params->list;

    while (pwd != NULL) {
        if (my_strcmp(pwd->var_name, "OLDPWD") == 0) {
            if (!(pwd->var_value = my_strdup(get_pwd(params))))
                return (84);
            return (0);
        }
        pwd = pwd->next;
    }
    return (0);
}

int change_pwd(param_t *params, char *path)
{
    list_t *tmp = params->list;
    int index = 0;

    while (tmp != NULL) {
        if (my_strcmp(tmp->var_name, "PWD") == 0) {
            change_old_pwd(params);
            if (!(tmp->var_value = my_strdup(path)))
                return (84);
            return (0);
        }
        if (tmp->next == NULL)
            index = tmp->index;
        tmp = tmp->next;
    }
    index++;
    add_end(params->list, "PWD", path, index);
    return (0);
}

int do_cd(param_t *params)
{
    char *path = NULL;

    if (my_arrsize(params->input) > 2) {
        my_putstr("cd: too many arguments\n");
        return (84);
    }
    if (chdir(params->input[1]) != 0)
        perror(params->input[1]);
    if (!(path = getcwd(path, 0)))
        return (84);
    change_pwd(params, path);
    return (0);
}