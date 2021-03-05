##
## EPITECH PROJECT, 2020
## lib
## File description:
## lib
##

CLIB_NAME		=	libmy.a

CLIB_SRCS_DIR	=	src/

CLIB_SRCS_FILES	=	my_putstr.c                 \
					my_put_nbr.c                \
					my_putchar.c                \
					my_strcpy.c                 \
					my_print_array.c            \
					my_strlen.c	                \
					free_double_array.c         \
					my_arrsize.c                \
					my_arrdup.c                 \
					my_concat_strings.c         \
					my_strcmp.c                 \
					my_strdup.c                 \
					my_str_to_word_array.c      \
					my_arrcpy.c 				\
					my_getnbr.c 				\
					my_str_isalpha.c 			\
					file_management/get_file.c  \
					file_management/read_file.c \
					file_management/get_size.c  \

CLIB_SRCS		=	$(addprefix $(CLIB_SRCS_DIR), $(CLIB_SRCS_FILES))

CLIB_OBJS		=	$(CLIB_SRCS:.c=.o)

CLIB_PATH		=	./

CLIB_DIR 		=	$(addprefix $(CLIB_PATH), $(CLIB_NAME))

RM 				=	rm -f

CFLAGS			+=	-I./include
CFLAGS			+=	-W -Wall -Werror -g3

all: $(CLIB_NAME)

$(CLIB_NAME):	$(CLIB_OBJS)
				ar rc $(CLIB_DIR) $(CLIB_OBJS)

clean:
	$(RM) $(CLIB_OBJS)

fclean: clean
	$(RM) $(CLIB_DIR)

re: fclean all