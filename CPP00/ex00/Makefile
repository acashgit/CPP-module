# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acash <acash@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/15 21:00:22 by acash             #+#    #+#              #
#    Updated: 2022/02/15 21:49:33 by acash            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
GCC = clang++
CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = megaphone.cpp \

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS) Makefile
	$(GCC) $(CFLAGS) $(OBJS) -o $(NAME)	

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re