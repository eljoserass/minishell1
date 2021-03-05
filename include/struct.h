/*
** EPITECH PROJECT, 2021
** minishell
** File description:
** file with structutures
*/

#ifndef STRUCT_H_
#define STRUCT_H_

typedef struct list_s {
    char *var_name;
    char *var_value;
    int index;
    struct list_s *next;
} list_t;

typedef struct param_s {
    char **input;
    list_t *list;
    char **env;
    int index;
    int is_exit;
} param_t;

typedef struct path_s {
    int (*fn)(param_t *);
    char *command;
} path_t;

#endif /* !STRUCT_H_ */
