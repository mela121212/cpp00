
NAME = main
CC = c++
CCFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRCS = main.cpp Contact.cpp PhoneBook.cpp
OBJS = ${SRCS:.cpp=.o}

all: $(NAME)

$(NAME): $(OBJS)
		@${CC} ${CFLAGS} ${SRCS} -o ${NAME}

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $^ -o $@	

clean:
	@${RM} ${OBJS}

fclean:
	@${RM} ${OBJS} ${NAME}

re: fclean all

.PHONY: all clean fclean re