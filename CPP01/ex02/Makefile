NAME		= hi_this_is_brain
SRCS		= main.cpp
OBJS		= ${SRCS:.cpp=.o}
CC			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
RM			= rm -f

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${CPPFLAGS} ${OBJS} -o ${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re