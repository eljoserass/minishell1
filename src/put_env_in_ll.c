/*
** EPITECH PROJECT, 2021
** minishell
** File description:
** get the env and put it into the linked list
*/

#include "minishell.h"

char *get_var(char *env, int *i)
{
    char *var = malloc(my_strlen_mod(env, '=', 0) + 1);

    if (!var)
        return (NULL);
    while (env[(*i)] != '=') {
        var[(*i)] = env[(*i)];
        (*i)++;
    }
    var[*i] = '\0';
    return (var);
}

char *get_var_name(char *env, int i)
{
    int tmp = i + 1;
    int n = 0;
    char *name = NULL;
    name = malloc(my_strlen_mod(env, '\0', my_strlen_mod(env, '=', 0)) + 1);

    if (!name)
        return (NULL);
    while (env[tmp] != '\0') {
        name[n] = env[tmp];
        tmp++;
        n++;
    }
    name[n] = '\0';
    return (name);
}

list_t *put_env_in_ll(char **env, param_t *params)
{
    int pos = 0;
    list_t *list = NULL;
    char *var = NULL;
    char *name = NULL;

    while (env[params->index] != NULL) {
        if (!(var = get_var(env[params->index], &pos)))
            return (NULL);
        if (!(name = get_var_name(env[params->index], pos)))
            return (NULL);
        if (!(list = add_end(list, var, name, params->index)))
            return (NULL);
        params->index++;
        pos = 0;
    }
    return (list);
}