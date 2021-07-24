
TEST	= test_lib.c

OBJ_TEST= ${TEST:.c=.o}

SRCS	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft

LIB_NAME= libft.a

CC		= gcc
RM		= rm -f
CCLIB	= ar rc

CFLAGS	= -Wall -Wextra -Werror

LFLAGS	= -L. -lft

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS} ${OBJ_TEST}
			${CC} -o ${NAME} ${OBJS} ${OBJ_TEST}

all:		${NAME}

lib:		${OBJS}
			${CCLIB} ${LIB_NAME} ${OBJS}

testlib:	lib
			${CC} ${CFLAGS} -o ${NAME} ${TEST} ${LFLAGS}

clean:
			${RM} ${OBJS} ${OBJ_TEST}

fclean:		clean
			${RM} ${NAME} ${LIB_NAME}

re:			fclean all

.PHONY:		all clean fclean re
