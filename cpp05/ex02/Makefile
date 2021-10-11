NAME		= name
SRCS		= ./main.cpp \
				./Bureaucrat.cpp \
				./Form.cpp \
				./ShrubberyCreationForm.cpp \
				
OBJS		= $(SRCS:.cpp=.o)
RM			= rm -f
FLAGS		= -Wall -Wextra -Werror 
COMPILER	= clang++

.cpp.o:
	${COMPILER} ${FLAGS} -c $< -o ${<:.cpp=.o}

$(NAME): ${OBJS}
	${COMPILER} ${FLAGS} $(OBJS) -o $(NAME)

all: $(NAME)
    
fclean: clean
	$(RM) $(NAME)
    
clean:
	$(RM) -f $(OBJS)
    
re: fclean all

.PHONY: all clean fclean re .cpp.o test