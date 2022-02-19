NAME = Zombie_hord
GCC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = main.cpp Zombie.cpp ZombieHorde.cpp

HEADER = Zombie.hpp

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