# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abittel <abittel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/18 10:24:03 by abittel           #+#    #+#              #
#    Updated: 2022/03/19 15:25:53 by abittel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_atoi.c ft_isalnum.c ft_isdigit.c ft_memchr.c ft_memmove.c ft_putendl_fd.c ft_split.c ft_striteri.c ft_strlcpy.c ft_strncmp.c ft_strtrim.c ft_toupper.c ft_bzero.c ft_isalpha.c ft_isprint.c ft_memcmp.c ft_memset.c ft_putnbr_fd.c ft_strchr.c ft_strjoin.c ft_strlen.c ft_strnstr.c ft_substr.c ft_calloc.c ft_isascii.c ft_itoa.c ft_memcpy.c ft_memccpy.c ft_putchar_fd.c ft_putstr_fd.c ft_strdup.c ft_strlcat.c ft_strmapi.c ft_strrchr.c ft_tolower.c ft_strcmp.c
OSRCS	=	${SRCS:.c=.o}
BONUS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c
OBONUS	=	${BONUS:.c=.o}
HEADER	=	libft.h
NAME	=	libft.a

all : ${NAME}

%.o: %.c 
	gcc -Wall -Werror -Wextra -c $< -o ${<:.c=.o} -g
bonus :	${OSRCS} ${OBONUS}
	ar crs ${NAME} ${OSRCS} ${OBONUS}
${NAME} :	${OSRCS}
	ar crs ${NAME} ${OSRCS}
clean :
	rm -f ${OSRCS} ${OBONUS}
fclean : clean
	rm -f ${NAME}
re : fclean all

.PHONY: all clean fclean re
