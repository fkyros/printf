# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gade-oli <gade-oli@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/16 11:53:14 by gade-oli          #+#    #+#              #
#    Updated: 2022/12/09 18:43:05 by gade-oli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libft.a

RM	=	/bin/rm -f

CC	=	gcc

CFLAGS =	-Wall -Wextra -Werror

SRC	= 	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
		ft_strlcat.c ft_toupper.c ft_tolower.c ft_strrchr.c ft_strchr.c ft_strncmp.c ft_atoi.c ft_memchr.c ft_memcmp.c ft_strdup.c ft_calloc.c ft_strnstr.c \
		ft_strmapi.c ft_striteri.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_split.c ft_itoa.c ft_putnbr_fd.c

OBJS =	${SRC:.c=.o}

SRCBONUS = ft_lstnew_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_front_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c \
			ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJBONUS = ${SRCBONUS:.c=.o}

all:		${NAME}

${NAME}:	${OBJS}
			ar -rcs ${NAME} ${OBJS}

bonus:		${OBJBONUS}
			$(MAKE) "OBJS=$(OBJBONUS)"

clean:		
			${RM} ${OBJS} ${OBJBONUS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

norm:
		@norminette ${SRC} ${SRCBONUS} libft.h

.PHONY:		all clean fclean re bonus norm
