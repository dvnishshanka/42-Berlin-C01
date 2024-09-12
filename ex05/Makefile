CFLAGS = -Wall -Wextra -Werror -std=c++98
COMPILER  = c++
NAME = harl
RM = rm -f
SRC = main.cpp Harl.cpp
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
