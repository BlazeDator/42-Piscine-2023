# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pabernar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/09 11:52:08 by pabernar          #+#    #+#              #
#    Updated: 2023/08/10 09:24:11 by pabernar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc 

CFLAGS = -Wall -Wextra -Werror

SOURCES = $(wildcard srcs/*.c)

INCLUDES = $(wildcard includes/*.h)

all: compile
	echo $@

re:
	echo $@

clean:
	echo $@

fclean:
	echo $@

compile:
	$(CC) -c $(CFLAGS) $^ -o $@
