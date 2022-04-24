NAME		= Diamond

SRC			= ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
OBJS		= $(SRC:.cpp=.o)

CXX			= clang++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow # -Wpedantic

#ARG			= "shhhhh... I think the students are asleep..."

.PHONY: all clean fclean re run

all: $(NAME)

$(NAME): $(OBJS) ClapTrap.hpp ScavTrap.hpp
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