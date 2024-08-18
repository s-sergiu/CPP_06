NAME = convert
CC = c++
FLAGS = -std=c++98 -Wall -Werror -Wextra

SRC = main.cpp \
	  ScalarConverter.cpp \

OBJ = main.o \
	  ScalarConverter.o \

all:$(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $@

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean: 
	$(RM) $(OBJ)

fclean: clean 
	$(RM) $(NAME)

re: clean all

.PHONY:all clean fclean re
