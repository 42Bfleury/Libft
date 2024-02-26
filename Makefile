# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/04 23:06:16 by bfleury           #+#    #+#              #
#    Updated: 2024/01/16 15:34:19 by bfleury          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

DEBUG	= 0

CC		= cc
CFLAGS	= -Wall -Wextra -Werror

SRCS	= ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_strlen.c\
		ft_memset.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strncmp.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_strnstr.c\
		ft_atoi.c\
		ft_calloc.c\
		ft_strdup.c
		
SRCS	+= ft_substr.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_split.c\
		ft_itoa.c\
		ft_strmapi.c\
		ft_striteri.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\

B_SRCS	= ft_lstnew.c\
		ft_lstadd_front.c\
		ft_lstsize.c\
		ft_lstlast.c\
		ft_lstadd_back.c\
		ft_lstdelone.c\
		ft_lstclear.c\
		ft_lstiter.c\
		ft_lstmap.c

OBJS	= $(SRCS:.c=.o)
B_OBJS	= $(B_SRCS:.c=.o)

all: debug $(NAME)

debug:
ifeq ($(DEBUG), 1)
	@echo "DEBUG MODE :"
endif

$(NAME): $(OBJS)
ifeq ($(DEBUG), 1)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
else
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
endif

bonus: $(OBJS) $(B_OBJS)
ifeq ($(DEBUG), 1)
	ar rc $(NAME) $(OBJS) $(B_OBJS)
	ranlib $(NAME)
else
	@ar rc $(NAME) $(OBJS) $(B_OBJS)
	@ranlib $(NAME)
endif

%.o: %.c
ifeq ($(DEBUG), 1)
	$(CC) $(CFLAGS) -c $< -o $@
else
	@$(CC) $(CFLAGS) -c $< -o $@
endif

clean:
ifeq ($(DEBUG), 1)
	rm -f $(OBJS) $(B_OBJS)
else
	@rm -f $(OBJS) $(B_OBJS)
endif

fclean: clean
ifeq ($(DEBUG), 1)
	rm -f $(NAME)
else
	@rm -f $(NAME)
endif

re:	fclean all

.PHONY:	debug clean fclean re
