# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/07 05:59:52 by bfleury           #+#    #+#              #
#    Updated: 2016/11/11 16:20:29 by bfleury          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libft.a
TYPEFILE		= library

RED				= \033[31m
YELLOW			= \033[33m
GREEN			= \033[1;32m
ENDCOLOR		= \033[0m

SUCCESS			= "$(GREEN)     [SUCCESS!]$(ENDCOLOR)"
OBJECT			= "$(YELLOW)Generating $(NAME) objects...$(ENDCOLOR)\c"
PROJECT			= "$(YELLOW)Generating $(NAME) $(TYPEFILE)...$(ENDCOLOR)\c"
RMOBJECTS		= "$(RED)Removing $(NAME) objects...  $(ENDCOLOR)\c"
RMPROJECT		= "$(RED)Removing $(NAME) $(TYPEFILE)...  $(ENDCOLOR)\c"

SRC_DIR			= srcs
OBJ_DIR			= objs
SRC				= $(shell find $(SRC_DIR) -name "*.c" -type f)
OBJ				= $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

CC				= clang
CFLAGS			= -Wall -Wextra -Werror
RM				= rm -rf

all:			build $(NAME)

build :
				@mkdir -p $(OBJ_DIR)

$(NAME):		$(OBJ)
				@echo $(PROJECT)
				@ar rc $(NAME) $(OBJ)
				@ranlib $(NAME)
				@echo $(SUCCESS)

$(OBJ_DIR)/%.o:	$(SRC_DIR)/%.c
				@echo $(OBJECT)
				@$(CC) $(CFLAGS) -o $@ -c $<
				@echo $(SUCCESS)

clean:
				@echo $(RMOBJECTS)
				@$(RM) $(OBJ_DIR) get_next_line.o
				@echo $(SUCCESS)

xclean:
				@echo $(RMPROJECT)
				@$(RM) $(NAME)
				@echo $(SUCCESS)

fclean:			clean xclean

re:				fclean all

.PHONY:			all build clean xclean fclean re
