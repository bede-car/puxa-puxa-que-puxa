# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bede-car <bede-car@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/08 21:48:55 by bede-car          #+#    #+#              #
#    Updated: 2023/07/06 23:01:28 by bede-car         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				=	push_swap
HEADER				=	./include/push_swap.h
LIB					=	./libftprintf/libftprintf.a
PATH_MANDATORY		=   ./source
SOURCE				= 	main.c parse.c utils.c init.c push_swap.c
CFLAG				=	-Wall -Wextra -Werror -I. -g3
MAKEFLAGS			=	--no-print-directory
OBJS				=	$(addprefix $(PATH_MANDATORY)/, $(SOURCE:.c=.o)) 
RM					=	rm -f

%.o:%.c ${HEADER}
	cc ${CFLAG} -c $< -o $@ 
	
all: libftprintf ${NAME}

libftprintf:
	@make -C ./libftprintf

${NAME}: $(OBJS) $(LIB)
	cc ${CFLAG} $^ -o $@

clean :
	${RM} ${OBJS} 
	$(MAKE) clean -C ./libftprintf
	 
fclean : clean
	${RM} ${NAME}
	${RM} ${LIB}

re : fclean all

val :
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./${NAME} ${shell shuf -i 0-50}

.PHONY:	all libftprintf clean fclean re