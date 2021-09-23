NAME		= megaphone
SRCS		= ./megaphone.cpp
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

test: re
	./megaphone ""
	./megaphone "shhhhh... I think the students are asleep..."
	./megaphone ""
	./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
	./megaphone ""
	./megaphone

.PHONY: all clean fclean re .cpp.o test