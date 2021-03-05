/*
** EPITECH PROJECT, 2021
** minishell
** File description:
** print malloc failed error
*/

#include "minishell.h"

int print_malloc_failed(void)
{
    write(2, "malloc failed\n", my_strlen("malloc failed\n"));

    return (84);
}