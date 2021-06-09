SRCS	=	Contact.cpp \
			Phonebook.cpp \
			main.cpp
HEADERS =	Contact.hpp \
            Phonebook.hpp
OBJS	= $(SRCS:.cpp=.o)
CC		= clang++
RM		= rm -f
CPPFLAGS	= -Wall -Wextra -Werror -I HEADERS
NAME	= phonebook

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