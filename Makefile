#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mwilk <mwilk@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/09 16:17:56 by mwilk             #+#    #+#              #
#    Updated: 2015/05/16 21:06:33 by mwilk            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################

NAME = libfts.a

SRC = ft_bzero.s\

OBJ_PATH = obj
SRC_PATH = src

OBJS = $(patsubst %.s, $(OBJ_PATH)/%.o, $(SRC))
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $@ $(OBJS)
	@ranlib $(NAME)
	@echo "\033[35m <(O.O<) WOW ! Very $(NAME) $(words $(OBJS)) ! Amaze ! (>^o^)> \033[0m"

$(OBJ_PATH)/%.o: $(addprefix $(SRC_PATH)/,%.s)
	@mkdir -p $(OBJ_PATH)
	~/.brew/Cellar/nasm/2.11.08/bin/nasm -f macho64 $^ -o $@ -g


clean:
	@/bin/rm -f $(OBJS)
	@echo "\033[36mT.T Miss you $(words $(OBJS)) T.T \033[0m"

fclean: clean
	@/bin/rm $(NAME)
	@echo "\033[36m X.x Bye Bye $(words $(NAME)) >_< \033[0m"

re: fclean all

.PHONY: all clean fclean re
