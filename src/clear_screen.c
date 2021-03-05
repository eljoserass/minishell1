/*
** EPITECH PROJECT, 2021
** minishell
** File description:
** clear screen function
*/

#include "minishell.h"

int clear_screen(param_t *params)
{
    (void)params;
    my_putstr("\e[1;1H\e[2J");
    return (0);
}