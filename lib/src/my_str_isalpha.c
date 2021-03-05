/*
** EPITECH PROJECT, 2020
** my_str_isalpha
** File description:
** function that return a 0 if is not alphanumerical
*/

int my_str_isalpha(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z')
            i++;
        else if (str[i] >= 'a' && str[i] <= 'z')
            i++;
        else if (str[i] >= '0' && str[i] <= '9')
            i++;
        else
            return (0);
    }
    return (1);
}