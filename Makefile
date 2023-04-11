# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nkietwee <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/05 14:24:33 by nkietwee          #+#    #+#              #
#    Updated: 2022/10/16 13:30:16 by nkietwee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRCS	= ft_isalpha.c\
	ft_isdigit.c\
	ft_isalnum.c\
	ft_isascii.c\
	ft_isprint.c\
	ft_strlen.c\
	ft_toupper.c\
	ft_tolower.c\
	ft_atoi.c\
	ft_strlcpy.c\
	ft_memset.c\
	ft_bzero.c\
	ft_memcpy.c\
	ft_memmove.c\
	ft_memcmp.c\
	ft_memchr.c\
	ft_strlcat.c\
	ft_strncmp.c\
	ft_strchr.c\
	ft_strrchr.c\
	ft_strnstr.c\
	ft_calloc.c\
	ft_strdup.c\
	ft_putchar_fd.c\
	ft_putstr_fd.c\
	ft_putendl_fd.c\
	ft_putnbr_fd.c\
	ft_strjoin.c\
	ft_substr.c\
	ft_strtrim.c\
	ft_striteri.c\
	ft_strmapi.c\
	ft_itoa.c\
	ft_split.c

BONUS_SRCS	= ft_lstnew.c\
		  ft_lstadd_front.c\
		  ft_lstsize.c\
		  ft_lstlast.c\
		  ft_lstadd_back.c\
		  ft_lstdelone.c\
		  ft_lstclear.c\
		  ft_lstiter.c\
		  ft_lstmap.c\

FLAGS = gcc -Wall -Wextra -Werror	  
OBJS	= $(SRCS:.c=.o)
OBBJS	= $(BONUS_SRCS:.c=.o)

all: $(NAME)

%o: %c
	$(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

bonus: $(OBBJS)
	ar -rcs $(NAME) $(OBBJS)

clean:
	rm -f $(OBJS) $(OBBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all  bonus clean fclean re


