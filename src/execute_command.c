/*
** EPITECH PROJECT, 2021
** minishell
** File description:
** function that do the parsing for launching the command
*/

#include "minishell.h"

int execute_command(char *input, path_t *paths, param_t *params)
{
    if (input[0] == '\n' ||
    is_in_c(input, ' ') == my_strlen_mod(input, '\n', 0))
        return (0);
    params->input = my_str_to_word_array(input, ' ');
    if (!params->input)
        return (84);
    launch_command(paths, params);
    free_double_array(params->input);
    return (0);
}