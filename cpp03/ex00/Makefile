NAME		= claptrap

SRC			= ClapTrap.cpp main.cpp
OBJS		= $(SRC:.cpp=.o)

CXX			= clang++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

#ARG			= "shhhhh... I think the students are asleep..."

all: $(NAME)

$(NAME): $(OBJS) ClapTrap.hpp
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