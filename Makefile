# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dkozacze <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/29 15:09:53 by dkozacze          #+#    #+#              #
#    Updated: 2020/12/10 13:00:11 by dkozacze         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_isprint.c ft_putendl_fd.c ft_strlcpy.c ft_tolower.c ft_atoi.c\
		  ft_itoa.c ft_putnbr_fd.c ft_strlen.c ft_toupper.c ft_bzero.c\
		  ft_memchr.c ft_putstr_fd.c ft_strmapi.c ft_calloc.c ft_memcmp.c\
	 	  ft_memccpy.c ft_strncmp.c ft_isalnum.c ft_memcpy.c ft_strchr.c\
	  	  ft_strnstr.c ft_isalpha.c ft_memmove.c ft_strdup.c ft_strrchr.c\
		  ft_isascii.c ft_memset.c ft_strjoin.c ft_strtrim.c ft_isdigit.c\
	   	  ft_putchar_fd.c ft_strlcat.c ft_substr.c ft_split.c 
OBJS	= ${SRCS:.c=.o}

BNS		= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
		  ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c\
		  ft_lstmap.c
OBNS	= ${BNS:.c=.o}

CFLAGS	= -Wall -Wextra -Werror
CC		= gcc ${CFLAGS}
AR		= ar -rcs
RM		= rm -f
NAME	= libft.a
LIB		= libft.h
Color	= \033[92m

%.o : %.c ${LIB}
	$(CC) -c $< $(CFLAGS)

${NAME}:	${OBJS}
				${AR} ${NAME} $<
				@echo "${Color}Libft done"

all:		${NAME}

clean:		
			@${RM} ${OBJS} ${OBNS}

fclean:		clean
			@${RM} ${OBJS} ${OBNS}

re:			fclean all

bonus :		${OBJS} ${OBNS} ${LIB}
				${AR} ${NAME} ${OBJS} ${OBNS}
				@echo "${Color}Libft and Bonus done"

.PHONY:		all clean fclean re bonus
