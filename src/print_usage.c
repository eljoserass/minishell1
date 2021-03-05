/*
** EPITECH PROJECT, 2021
** minishell
** File description:
** print usage
*/

#include "minishell.h"

int print_usage(void)
{
    my_putstr("USAGE\n");
    my_putstr("I wanted to make this copy of the TCSH a bit more custom\n");
    my_putstr("The terminal it's you closer connection to talk to your");
    my_putstr(" computer, so better to make it nice\n\n");
    my_putstr("OPTIONS\n");
    my_putstr("\t./mysh for classic mode\n");
    my_putstr("\t./mysh <custom prompt> for good looking terminal\n");
    return (0);
}
