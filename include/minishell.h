/*
** EPITECH PROJECT, 2021
** minishell1
** File description:
** minishell
*/

#ifndef MINISHELL_H_
#define MINISHELL_H_

#include "lib.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

#include "struct.h"

/////////
int print_hola(param_t *params);
int print_usage(void);
int do_minishell(char **, char *);
int print_malloc_failed(void);
int is_int(char *str);
list_t *put_env_in_ll(char **env, param_t *);
int launch_command(path_t *paths, param_t *params);
int do_minishell(char **, char *);
int my_strlen_mod(char *str, char delim, int from);
void free_path(path_t *opt);
void free_params(param_t *params);
void print_welcome(void);
int execute_command(char *input, path_t *paths, param_t *params);
void print_prompt(char *prompt);
char *my_concat_strings(char *sone, char *stwo);
char **put_bin(char **arr, char *command);
char **get_path(param_t *params);
char *find_access(param_t *params);
int do_execve(param_t *);
int do_cd(param_t *);
int do_exit(param_t *params);
int clear_screen(param_t *params);
int print_env(param_t *);
int set_env(param_t *);
int is_in_c(char *str, char c);
int is_new_var(param_t *params);
int change_var_value(param_t *params);
int unset_env(param_t *);
char **my_str_to_word_array_path(char *str);
/////////
path_t *init_fn_pn(void);
param_t *init_param(void);
/////////
list_t *create_node(char *, char *, int);
list_t *add_start(list_t *, char *, char *, int);
list_t *add_end(list_t *, char *, char *, int);
void free_linked_list(list_t *);
int remove_element(list_t *list, int index);
int remove_firts_element(list_t **list);
void print_list(list_t *);
////////

#endif /* !MINISHELL_H_ */
