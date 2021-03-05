/*
** EPITECH PROJECT, 2021
** minishell
** File description:
** print welcome to the shell
*/

#include "minishell.h"

void print_welcome_aux(void)
{
    my_putstr("\033[0;31m");
    my_putstr("\n\n\n\n\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$'               `$$$$");
    my_putstr("$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
    my_putstr("\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$'                   `$$$$$$$$$$");
    my_putstr("$$$$$$$$$$$$$$$$$$\n");
    my_putstr("\t$$$'`$$$$$$$$$$$$$'`$$$$$$!                       !$$$$$$'`");
    my_putstr("$$$$$$$$$$$$$'`$$$\n");
    my_putstr("\t$$$$  $$$$$$$$$$$  $$$$$$$                         $$$$$$$"); 
    my_putstr("  $$$$$$$$$$$  $$$$\n");
    my_putstr("\t$$$$. `$' \' \\$    $$$$$$$!           mysh          !$$$$$");
    my_putstr("$$  '$/ `/ `$' .$$$$\n");
    my_putstr("\t$$$$$. !\\  i  i .$$$$$$$$                           $$$$$$");
    my_putstr("$$. i  i  /! .$$$$$\n");
    my_putstr("\t$$$$$$   `--`--.$$$$$$$$$                           $$$$$$$");
}

void print_welcome(void)
{
    print_welcome_aux();
    my_putstr("$$.--'--'   $$$$$$\n");
    my_putstr("\t$$$$$$L        `$$$$$^^$$                           $$^^$$$");
    my_putstr("$$'        J$$$$$$\n");
    my_putstr("\t$$$$$$$.   .'   ""~     $$$    $.                 .$  $$$");  
    my_putstr(" ~""   `.     .$$$$$$$$$\n");
    my_putstr("\t$$$$$$$$$   `.$$$$$$$$$$$$     $$$.         .$$$   $$$$$$$$");
    my_putstr("$$$$.'   $$$$$$$$$\n");
    my_putstr("\t$$$$$$$$    .$$$$$$$$$$$$$!     $$`$$$$$$$$'$$    !$$$$$$$$");
    my_putstr("$$$$$.    $$$$$$$$\n");
    my_putstr("\t$JT&yd$     $$$$$$$$$$$$$$$$.    $    $$    $   .$$$$$$$$$$");
    my_putstr("$$$$$$     $by&TL$\n");
    my_putstr("\t                                 $    $$    $\n");
    my_putstr("\t                                 $.   $$   .$\n");
    my_putstr("\t                                 `$        $'\n");
    my_putstr("\t                                  `$$$$$$$$'\n\n");
    my_putstr("\033[0m");
}
