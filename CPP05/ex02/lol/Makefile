NAME		= program
SRCS		= main.cpp \
			AForm.cpp \
			PresidentialPardonForm.cpp

OBJS		= ${SRCS:.cpp=.o}
DEPS		= ${SRCS:.cpp=.d}
CC			= clang++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
RM			= rm -f

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${CPPFLAGS} ${OBJS} -o ${NAME}

clean:
			${RM} ${OBJS} ${DEPS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re