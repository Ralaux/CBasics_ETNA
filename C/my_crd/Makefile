CC = gcc
NAME = Release/my_crd
SRC = main.c
OBJ = $(SRC:%.c=%.o)
CFLAGS = -W -Wall -Wextra -Werror

$(NAME):	$(OBJ)
			$(CC) $(OBJ) -o $(NAME)
all:	$(NAME)

clean:
		$(RM) $(OBJ)

fclean: 	clean
		$(RM) $(NAME)

re:		fclean all
