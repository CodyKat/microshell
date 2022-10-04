CC = cc
NAME = minishell
CFLAGS = -Wall -Wextra -Werror
NAME_LIBFT = libft.a
DIR_LIBFT = ./libft
LIB_LIBFT = -L$(DIR_LIBFT)
DIR_READLINE = readline
LIB_READLINE = -L$(DIR_READLINE)
INCLUDE_READLINE = -I$(DIR_READLINE)
INCLUDE = -Iinclude -I$(DIR_LIBFT)
RM = rm -f

READLINE = $(DIR_READLINE)/libreadline.a \
		   $(DIR_READLINE)/libhistory.a

SRCS_DIR := ./src

SRC_MAIN		:= main.c
SRC_MAIN		:= $(addprefix $(DIR_HEREDOC)/, $(SRC_HEREDOC))

SRCS			=	$(SRC_ENV)

OBJS 			=	${SRCS:.c=.o}

all : ${NAME}

$(NAME) : $(NAME_LIBFT) ${OBJS} $(READLINE)
	@cat ./decoration/intro
	@${CC} -o ${NAME} ${CFLAGS} ${OBJS} $(LIB_READLINE) $(LIB_LIBFT) -lreadline -lft -lncurses
	@chmod +x ./decoration/loading.sh
	@./decoration/loading.sh
$(NAME_LIBFT)	:
	@make -C $(DIR_LIBFT) all

$(READLINE)		:
	@cd $(DIR_READLINE); ./configure
	@make -C $(DIR_READLINE) all

%.o		:	%.c
	@$(CC) $(CFLAGS) -o $@ -c $< $(INCLUDE) $(INCLUDE_READLINE)

clean :
	@make -C $(DIR_READLINE) clean
	@make -C $(DIR_LIBFT) fclean
	@rm -f ${OBJS}

fclean : clean
	@rm -f ${NAME}

.PHONY : all clean fclean bonus re

re : fclean all
