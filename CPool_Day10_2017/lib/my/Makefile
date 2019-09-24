##
## EPITECH PROJECT, 2017
## makefile
## File description:
## makefile
##



SRC	=	my_params_to_list.c

OBJ	=	$(SRC: .c=.o)

NAME	=	libmy.a

all: $(NAME)


$(NAME): $(OBJ)
	gcc -c $(OBJ)
	ar rc $(NAME) *.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(clean)


re:	fclean all

.PHONY : all clean fclean re
