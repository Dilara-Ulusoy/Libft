# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dakcakoc <dakcakoce@student.hive.fi>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/19 10:32:48 by dakcakoc          #+#    #+#              #
#    Updated: 2024/04/24 15:45:39 by dakcakoc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c ft_itoa.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
       ft_isdigit.c ft_isprint.c ft_memset.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_putchar_fd.c \
       ft_putnbr_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_strlen.c ft_strlcat.c ft_strlcpy.c ft_strncmp.c ft_strrchr.c ft_strdup.c ft_strjoin.c ft_split.c ft_strmapi.c\
       ft_tolower.c ft_toupper.c ft_calloc.c ft_strnstr.c ft_strchr.c ft_substr.c ft_strtrim.c ft_striteri.c \

BONUS =	ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c \
		ft_lstnew_bonus.c ft_lstsize_bonus.c ft_lstmap_bonus.c \
	   
HEADER = libft.h

AR = ar rcs

CC = cc
CFLAGS = -Wall -Wextra -Werror

OBJS = ${SRCS:.c=.o}

BONUS_OBJS = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): ${OBJS}
	$(AR) -r $@ $?

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -f *.o $(OBJS) $(BONUS_OBJS)

bonus:	$(OBJS) $(BONUS_OBJS)
	$(AR) -r $(NAME) $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all bonus

.PHONY: all clean fclean re bonus

