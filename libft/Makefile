# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kyamada <kyamada@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/27 13:10:03 by kyamada           #+#    #+#              #
#    Updated: 2025/05/04 17:27:24 by kyamada          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
TARGET = libft.a
CC = clang
CFLAGS = -Wall -Wextra -Werror -g
SRCS =	ft_strlen.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strnstr.c \
		ft_strncmp.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memchr.c \
		ft_memmove.c \
		ft_memcmp.c \
		ft_atoi.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c\
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_printf.c \
		puthex.c \
		putetc.c

BSRCS	=	ft_lstnew.c \
       		ft_lstadd_front.c \
    		ft_lstsize.c \
   			ft_lstlast.c \
   			ft_lstadd_back.c \
   			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c

OBJS	= ${SRCS:.c=.o}

BOBJS	= ${BSRCS:.c=.o}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar -rcs ${NAME} ${OBJS}

all:		${NAME}

clean:
	rm -f ${OBJS}
	rm -f ${BOBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

bonus: 	${BOBJS}
	ar -rcs $(NAME) ${BOBJS}

.PHONY: all, bonus, clean, fclean, re
