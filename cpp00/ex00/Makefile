NAME	= megaphone

SRC		= megaphone.cpp
OBJS	= $(SRC:.cpp=.o)

CXX		= c++
CXXFLAGS	= -Wall -Wextra -Werror

ARG = "shhhhh... I think the students are asleep..."

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
