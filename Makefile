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

#The ar command is used to create, modify, and extract from archives
AR = ar rcs

CC = cc

# This command will give you all the warnings and errors
CFLAGS = -Wall -Wextra -Werror 

# This will replace all the .c files with .o files
OBJS = ${SRCS:.c=.o}

# This will replace all the .c files with .o files for bonus
BONUS_OBJS = $(BONUS:.c=.o) 

# This target will compile the library and create the .a file with the name of the library
all: $(NAME)

$(NAME): ${OBJS} ${HEADER}
	$(AR) -r $@ $?

# This will compile the .c files to .o files
%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

bonus:	.bonus # This will compile the bonus files 

.bonus: $(OBJS) $(BONUS_OBJS)
	$(AR) -r $(NAME) $(OBJS) $(BONUS_OBJS)
	touch .bonus 
# This rule cleans all the .o files and the bonus files
clean:
	rm -f $(OBJS) $(BONUS_OBJS)
	rm -f .bonus

fclean: clean
	rm -f $(NAME) 

re: fclean all bonus

.PHONY: all clean fclean re bonus

