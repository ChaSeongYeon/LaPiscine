# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seocha <seocha@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/17 14:23:26 by seocha            #+#    #+#              #
#    Updated: 2022/10/20 12:37:38 by seocha           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = bsq

OBJS = bsq.o exception.o math.o bsq_exception.o map_to_array.o main.o

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

bsq.o : bsq.c
	$(CC) $(CFLAGS) -c -o $@ bsq.c

exception.o : exception.c
	$(CC) $(CFLAGS) -c -o $@ exception.c

math.o : math.c
	$(CC) $(CFLAGS) -c -o $@ math.c

map_to_array.o : map_to_array.c
	$(CC) $(CFLAGS) -c -o $@ map_to_array.c

main.o : main.c
	$(CC) $(CFLAGS) -c -o $@ main.c

bsq_exception.o : bsq_exception.c
	$(CC) $(CFLAGS) -c -o $@ bsq_exception.c

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
