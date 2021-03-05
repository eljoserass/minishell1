/*
** EPITECH PROJECT, 2021
** minishell
** File description:
** check if a string is an int, 1 = true, 0 = false
*/

int is_int(char *str)
{
    int i = 0;

    if (str[0] == '-')
        i++;
    while (str[i] != 0) {
        if (str[i] >= '0' && str[i] <= '9')
            i++;
        else
            return (0);
    }
    return (1);
}