# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/04 23:06:16 by bfleury           #+#    #+#              #
#    Updated: 2025/02/09 14:15:37 by bfleury          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				= libft.a

CC					= cc
CFLAGS				= -Wall -Wextra -Werror

FILES				= ft_atoi.c				\
					ft_bzero.c				\
					ft_calloc.c				\
					ft_isalnum.c			\
					ft_isalpha.c			\
					ft_isascii.c			\
					ft_isdigit.c			\
					ft_isprint.c			\
					ft_itoa.c				\
					ft_memchr.c				\
					ft_memcmp.c				\
					ft_memcpy.c				\
					ft_memmove.c			\
					ft_memset.c				\
					ft_putchar_fd.c			\
					ft_putendl_fd.c			\
					ft_putnbr_fd.c			\
					ft_putstr_fd.c			\
					ft_split.c				\
					ft_strchr.c				\
					ft_strdup.c				\
					ft_striteri.c			\
					ft_strjoin.c			\
					ft_strlcat.c			\
					ft_strlcpy.c			\
					ft_strlen.c				\
					ft_strmapi.c			\
					ft_strncmp.c			\
					ft_strnstr.c			\
					ft_strrchr.c			\
					ft_strtrim.c			\
					ft_substr.c				\
					ft_tolower.c			\
					ft_toupper.c

B_FILES				= ft_lstadd_back.c		\
					ft_lstadd_front.c		\
					ft_lstclear.c			\
					ft_lstdelone.c			\
					ft_lstiter.c			\
					ft_lstlast.c			\
					ft_lstmap.c				\
					ft_lstnew.c				\
					ft_lstsize.c

SRCS_DIR			= srcs
SRCS				= $(addprefix $(SRCS_DIR)/, $(FILES))

B_SRCS_DIR			= srcs_bonus
B_SRCS				= $(addprefix $(B_SRCS_DIR)/, $(B_FILES))

OBJS_DIR			= objs
OBJS				= $(FILES:%.c=$(OBJS_DIR)/%.o)
B_OBJS				= $(B_FILES:%.c=$(OBJS_DIR)/%.o)

all:				$(NAME)

$(NAME):			$(OBJS_DIR) $(OBJS)
					@ar rc $(NAME) $(OBJS)
					@ranlib $(NAME)

bonus:				$(OBJS_DIR) $(OBJS) $(B_OBJS)
					@ar rc $(NAME) $(OBJS) $(B_OBJS)
					@ranlib $(NAME)

$(OBJS_DIR):
					@mkdir -p objs

$(OBJS_DIR)/%.o:	$(SRCS_DIR)/%.c
					@$(CC) $(CFLAGS) -c $< -o $@

$(OBJS_DIR)/%.o:	$(B_SRCS_DIR)/%.c
					@$(CC) $(CFLAGS) -c $< -o $@

clean:
					@rm -rf $(OBJS_DIR)

fclean: 			clean
					@rm -f $(NAME)

re:					fclean all

.PHONY:				debug clean fclean re
