/*
** EPITECH PROJECT, 2021
** minishell1
** File description:
** main
*/

#include "minishell.h"

int main(int ac, char **av, char **env)
{
    if (ac >= 3) {
        my_putstr("invalid arguments\n");
        return (84);
    }
    if (ac == 2 && my_strcmp(av[1], "-h") == 0)
        return (print_usage());
    if (ac == 2 && my_strcmp(av[1], "-h") != 0)
        return (do_minishell(env, av[1]));
    return (do_minishell(env, NULL));
}