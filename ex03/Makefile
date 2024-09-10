# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dnishsha <dnishsha@student.42berlin.d      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/06 19:12:55 by dnishsha          #+#    #+#              #
#    Updated: 2024/09/06 19:13:03 by dnishsha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror -std=c++98
COMPILER  = c++
NAME = brain
RM = rm -f
SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	$(COMPILER) $(CFLAGS) $(OBJS) -o $(NAME) 

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: re all fclean clean
