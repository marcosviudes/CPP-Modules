NAME		= PmergeMe

SRC			= main.cpp PmergeMe.cpp
OBJS		= $(SRC:.cpp=.o)
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3
ARG			=

all : $(NAME)

$(NAME) : $(OBJS)
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

debug: fclean
debug: CXXFLAGS += -DDEBUG -g
debug: $(NAME)