SRCS =	contact.cpp \
	main.cpp

OBJS = $(SRCS:.cpp=.o)
NAME = annuaire
RM = rm -f
CC = clang++
CFLAGS = -Wall -Wextra -Werror 

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS) 

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

