NAME = account
GCC = clang++
CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = Account.cpp test.cpp

HEADER = Account.hpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS) $(HEADER) Makefile
	$(GCC) $(CFLAGS) $(OBJS) -o $(NAME)	

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re