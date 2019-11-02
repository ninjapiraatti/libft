# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlouekar <tlouekar@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/24 09:41:56 by tlouekar          #+#    #+#              #
#    Updated: 2019/11/02 11:31:35 by tlouekar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = *.c # NO WILDCARD! List one by one

INCS = libft.h

CFLAGS = -Wall -Wextra -Werror

OUTPUT = *.o # NO WILDCARD! List one by one

EXE = a.out

MAIN = ../main.c

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -I $(INCS) -c $(SRCS)
	ar rc $(NAME) $(OUTPUT)
	ranlib $(NAME)

norm:
	norminette $(SRCS)

clean:
	/bin/rm -f $(OUTPUT)

exe:
	gcc $(CFLAGS) -o $(EXE) $(MAIN) -I $(INCS) -L. -lft

fclean: clean
	rm -f $(NAME) $(EXE)
	
re: fclean all

fuckall: fclean norm all exe
