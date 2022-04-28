NAME		= Bureaucrat

SRC			=	main.cpp Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp

OBJS		= $(SRC:.cpp=.o)

CXX			= clang++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

#ARG			= ""

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