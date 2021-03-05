/*
** EPITECH PROJECT, 2020
** my_pustr.c
** File description:
** print string
*/

#include "lib.h"

int my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
    return (0);
}