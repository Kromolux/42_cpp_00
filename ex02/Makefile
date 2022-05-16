# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/12 15:48:15 by rkaufman          #+#    #+#              #
#    Updated: 2022/05/12 19:06:18 by rkaufman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:=	GlobalBanksters

CC			:=	c++
HEADERFILE	:=	

SRCS		:=	tests.cpp \
				Account.cpp

OBJS		:=	$(SRCS:%.cpp=%.o)

CFLAGS		:=	-Wall -Wextra -Werror -std=c++98 -g

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJS): %.o: %.cpp
	$(CC) -c $(CFLAGS) $< -o $@
	
clean:
	rm -fr $(OBJS)

fclean: clean
	rm -fr $(NAME)
	rm -fr out.log

re: fclean all

val:
	valgrind --leak-check=full -s ./$(NAME)

outfile:
	./$(NAME) | awk '{print$2}' > out.log

.PHONY: clean fclean re
