/*
** EPITECH PROJECT, 2021
** minishell
** File description:
** print the prompt of the user interface
*/

#include "minishell.h"

void print_prompt(char *prompt)
{
    my_putstr("\x1b[35m");
    my_putstr(prompt);
    my_putchar(' ');
    my_putstr("\x1b[0m");
}