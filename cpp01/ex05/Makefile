NAME = karen

SRC		=	main.cpp\
			Karen.cpp

OBJS	= $(SRC:.cpp=.o)

CXX				= clang++
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98

debug: CXXFLAGS += -DDEBUG -g
debug: clean all

.PHONY: all clean fclean re run debug

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
