##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## principal Makefile
##

NAME		=	mysh

SRC_PATH	=	src/

SRC			=	linked_list/add_end.c 			\
				linked_list/add_start.c 		\
				linked_list/create_node.c 		\
				linked_list/print_list.c 		\
				linked_list/remove_node.c 		\
				linked_list/free_linked_list.c	\
				main.c						\
				print_usage.c 				\
				print_welcome.c 			\
				free_struct.c 				\
				execute_command.c 			\
				launch_command.c 			\
				exit.c 						\
				print_prompt.c 				\
				print_malloc_failed.c 		\
				is_int.c 					\
				my_strlen_mod.c 			\
				my_concat_strings.c			\
				handle_access.c				\
				print_hola.c 				\
				env.c 						\
				clear_screen.c 				\
				do_cd.c						\
				do_execve.c 				\
				do_minishell.c				\
				put_env_in_ll.c 			\
				init_struct.c 				\
				is_new.c					\
				change_var_value.c			\

SRCS		=	$(addprefix $(SRC_PATH), $(SRC))

OBJ			=	$(SRCS:.c=.o)

RM			=	rm -f

LDLIBS		+=	-L./lib/ -lmy

CFLAGS		+=	-I./include/ -I./lib/include -g3

all:		$(NAME)

$(NAME):	make_lib $(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(LDLIBS) $(CFLAGS)

make_lib:
		$(MAKE) -C lib/

clean:
		$(RM) $(OBJ)
		$(MAKE) clean -C lib/

fclean:		clean
		rm -rf $(NAME)
		$(MAKE) fclean -C lib/

re:		fclean all
		$(MAKE) re -C lib/
