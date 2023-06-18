# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bede-car <bede-car@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/08 21:48:55 by bede-car          #+#    #+#              #
#    Updated: 2023/06/09 21:11:59 by bede-car         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				=	push_swap
HEADER				=	./include/push_swap.h
LIB					=	./libftprintf/libftprintf.a
PATH_MANDATORY		=   ./source
SOURCE				= 	main.c
CFLAG				=	-Wall -Wextra -Werror -I.
MAKEFLAGS			=	--no-print-directory
OBJS				=	$(addprefix $(PATH_MANDATORY)/, $(SOURCE:.c=.o)) 
RM					=	rm -f

%.o:%.c ${HEADER}
	cc ${CFLAG} -c $< -o $@ 
	
all: libftprintf ${NAME}

libftprintf:
	@make -C ./libftprintf

${NAME}: $(OBJS) $(LIB)
	cc $^ -o $@

clean :
	${RM} ${OBJS} 
	$(MAKE) clean -C ./libftprintf
	 
fclean : clean
	${RM} ${NAME}
	${RM} ${LIB}

re : fclean all

.PHONY:	all libftprintf clean fclean re