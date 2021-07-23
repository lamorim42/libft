
SRCS	= teste_lib.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c

OBJS	= ${SRCS:.c=.o}

all:	${OBJS}
		gcc ${OBJS}
