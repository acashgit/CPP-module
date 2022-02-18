# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acash <acash@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/15 21:00:22 by acash             #+#    #+#              #
#    Updated: 2022/02/18 11:57:06 by acash            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = myphonebook
GCC = clang++
CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = main.cpp PhoneBook.cpp Contact.cpp

HEADER = PhoneBook.hpp Contact.hpp

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