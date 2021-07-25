
TEST	= test_func.c

OBJ_TEST= ${TEST:.c=.o}

SRCS	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_strlen.c

OBJS	= ${SRCS:.c=.o}

NAME	= test_func

LIB_NAME= libft.a

TEST_LIB= test_lib

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

testlib:
			${CC} ${CFLAGS} -o ${TEST_LIB} ${TEST} ${LFLAGS}

runtestfunc:${NAME}
			$(shell ./${NAME} | grep "^KO")

runtestlib:
			$(shell ./${TEST_LIB} > testlib.log)

clean:
			${RM} ${OBJS} ${OBJ_TEST} testlib.log

fclean:		clean
			${RM} ${NAME} ${TEST_LIB}

re:			fclean all

.PHONY:		all clean fclean re lib testlib runtestfunc runtestlib
