NAME		= FragTrap
SRCS		= ./main.cpp \
				./ClapTrap.cpp \
				./ScavTrap.cpp \
				./FragTrap.cpp \
				./DiamondTrap.cpp \

				
OBJS		= $(SRCS:.cpp=.o)
RM			= rm -f
FLAGS		= -Wall -Wextra -Werror -Wshadow -Wno-shadow
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