/*
** EPITECH PROJECT, 2021
** minishell
** File description:
** functions  for the parsing of using access
*/

#include "minishell.h"

char **put_bin(char **arr, char *command)
{
    int i = 0;

    while (arr[i] != NULL) {
        arr[i] = my_concat_strings(arr[i], command);
        if (!arr[i])
            return (NULL);
        i++;
    }
    return (arr);
}

char **get_path(param_t *params)
{
    list_t *tmp = params->list;
    char **arr = NULL;
    char **returned = malloc(sizeof(char *) * 1);

    if (!returned)
        return (NULL);
    if (!(returned[0] = my_strdup("=")))
        return (NULL);
    while (tmp != NULL) {
        if (my_strcmp(tmp->var_name, "PATH") == 0) {
            if (!(arr = my_str_to_word_array(tmp->var_value, ':')))
                return (NULL);
            if (!(arr = put_bin(arr, params->input[0])))
                return (NULL);
            return (arr);
        }
        tmp = tmp->next;
    }
    return (returned);
}

char *find_access(param_t *params)
{
    int i = 0;
    char *result = NULL;
    char **path = get_path(params);

    if (path[0][0] == '=')
        return (my_strdup("not"));
    while (path[i] != NULL) {
        if (access(path[i], F_OK) == 0) {
            if (!(result = my_strdup(path[i])))
                return (NULL);
            free_double_array(path);
            return (result);
        }
        i++;
    }
    free_double_array(path);
    return (my_strdup("not"));
}