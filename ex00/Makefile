NAME= Fixed
SRCS = main.cpp Fixed.cpp
OBJS = $(SRCS:.cpp=.o)
CPP = c++
CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) -o $(NAME)

clean:
	rm -Rf $(OBJS)

fclean: clean
	rm -Rf $(NAME)

re: fclean
	$(MAKE) all

.PHONY: all clean fclean re
