# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gade-oli <gade-oli@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/23 12:53:42 by gade-oli          #+#    #+#              #
#    Updated: 2023/01/27 14:45:41 by gade-oli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COLOUR_GREEN =\033[1;32m
COLOUR_RED =\033[1;31m
COLOUR_YELLOW =\033[1;33m
COLOUR_BLUE =\033[1;34m
NO_COLOUR =\033[0m

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror

#printf--------------------------------------------------------------------

NAME	=	libftprintf.a

SRC		=	src/ft_printf.c src/utils/ft_cs.c src/utils/ft_di.c src/utils/ft_u.c src/utils/ft_pxX.c

OBJ		= 	$(SRC:.c=.o)

#libft---------------------------------------------------------------------

LIBFT_DIR = ./libft/

#recipes-------------------------------------------------------------------

all:		$(NAME)

$(NAME):	$(OBJ)
			@echo "${COLOUR_BLUE}compiling libft...$(NO_COLOUR)"
			@make -s -C ${LIBFT_DIR}
			@echo "${COLOUR_BLUE}compiling ft_printf...$(NO_COLOUR)"
			@mv libft/libft.a .
			@mv libft.a $(NAME)
			@ar -rcs $(NAME) $(OBJ)
			@echo "$(COLOUR_GREEN)compilation ready!$(NO_COLOUR)"

clean:	
			@make clean -s -C $(LIBFT_DIR)
			@echo "$(COLOUR_RED)libft objects removed!$(NO_COLOUR)"
			@rm -f $(OBJ)
			@echo "$(COLOUR_RED)ft_printf objects removed!$(NO_COLOUR)"

fclean:
			@make fclean -s -C $(LIBFT_DIR)
			@echo "$(COLOUR_RED)libft removed!$(NO_COLOUR)"
			@rm -f $(NAME)
			@echo "$(COLOUR_RED)ft_printf removed!$(NO_COLOUR)"

re:			fclean all

.PHONY:	all clean fclean re
