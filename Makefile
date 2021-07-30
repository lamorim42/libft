
SRCS	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_strlen.c ft_memset.c ft_strlcpy.c ft_toupper.c ft_tolower.c \
			ft_strchr.c ft_strrchr.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

TEST_FUN= test_fun.c

OBJ_TEST= ${TEST_FUN:.c=.o}

TEST	= test

CC		= clang
RM		= rm -f
CCLIB	= ar rcs

CFLAGS	= -Wall -Wextra -Werror

LFLAGS	= -L. -lft

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CCLIB} ${NAME} ${OBJS}

all:		${NAME}

test:		${OBJS} ${OBJ_TEST}
			${CC} ${CFLAGS} -o ${TEST} ${OBJ_TEST} ${LFLAGS} -lbsd

run:
			$(shell ./${TEST} > error.log)

clean:
			${RM} ${OBJS} ${OBJ_TEST}

fclean:		clean
			${RM} ${NAME} ${TEST} error.log

re:			fclean all

.PHONY:		all clean fclean re run test
