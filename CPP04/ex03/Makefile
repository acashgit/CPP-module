NAME = Materia
GCC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS =  main.cpp Ice.cpp AMateria.cpp Character.cpp Cure.cpp MateriaSource.cpp

HEADER = ICharacter.hpp Ice.hpp AMateria.hpp Character.hpp IMateriaSource.hpp Cure.hpp MateriaSource.hpp

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