NAME = BraiiiiiiinnnzzzZ

SRC		= main.cpp \
			newZombie.cpp \
			randomChump.cpp \
			Zombie.cpp

OBJS	= $(SRC:.cpp=.o)

CXX				= clang++
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98

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
