##
## EPITECH PROJECT, 2017
## makefile
## File description:
## makefile
##



SRC	=	cat.c

OBJ	=	$(SRC: .c=.o)

NAME	=	cat

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f *.o

fclean:	clean
	rm -f $(clean)


re:	fclean all

.PHONY	: all clean fclean re
