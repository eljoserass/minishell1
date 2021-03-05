/*
** EPITECH PROJECT, 2021
** minishell
** File description:
** easter egg
*/

#include "minishell.h"

int print_hola(param_t *params)
{
    (void)params;
    my_putstr("\x1b[32m");
    my_putstr("jaja hola\n");
    my_putstr("\x1b[0m");
    return (0);
}