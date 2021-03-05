/*
** EPITECH PROJECT, 2021
** minishell
** File description:
** my_strlen but pro mode
*/

#include "minishell.h"

int my_strlen_mod(char *str, char delim, int from)
{
    int i = from;

    while (str[i] != delim)
        i++;
    return (i);
}