SRCS = main.c game.c is.c loadfile.c mallint.c prepross.c tools.c
OBJS = ${SRCS:.c=.o}
LIBS = prototipes.h headers.h
NAME = BSQ
CC = cc
RM = rm -f
CFLAGS = -Wall -Werror -Wextra

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
${NAME}: ${OBJS} ${LIBS}
	${CC} -o ${NAME} ${OBJS}
all: ${NAME}
clean:
	${RM} ${OBJS}
fclean: clean
	${RM} ${NAME}
re: fclean all
.PHONY:	all clean fclean re
