NAME		= farm

SRC			= main.cpp Animal.cpp Cat.cpp Dog.cpp
OBJS		= $(SRC:.cpp=.o)

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

ARG			= "shhhhh... I think the students are asleep..."

.PHONY: all clean fclean re run

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:
	make fclean
	make all

run: $(NAME)
	./$(NAME) $(ARG)