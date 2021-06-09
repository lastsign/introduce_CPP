SRCS	=	main.cpp
HEADERS =	iter.hpp
OBJS	= $(SRCS:.cpp=.o)
CC		= clang++
RM		= rm -f
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98 -I HEADERS
NAME	= a.out

all: $(NAME)

%.o:%.c
	$(CC) $(CPPFLAGS) -o $@ -c $<

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re