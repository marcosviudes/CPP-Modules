NAME = Horde

SRC		= main.cpp \
			newZombie.cpp \
			randomChump.cpp \
			Zombie.cpp \
			ZombieHorde.cpp

OBJS	= $(SRC:.cpp=.o)

CXX				= clang++
CXXFLAGS		= -Wall -Wextra -Werror


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
